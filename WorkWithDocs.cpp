//
// Created by ICR on 28.03.2024.
//

#include <iostream>
#include "WorkWithDocs.h"
#include "Document.h"
#include "UI/AbstractConsole.h"

void workWithDocs(AbstractConsole &console) {
    auto originalDoc = new Document("content"); // allocated over heap, not stack!
    auto copyDoc = originalDoc;

    string newTitle;
    console >> newTitle;
    copyDoc->setTitle(newTitle);
    console << "You provided " << copyDoc->getTitle() << " with length " << copyDoc->getTitle().length() << "\n";

    // delete too early -> memory access violation
    // delete copyDoc;

    string anotherTitle;
    copyDoc->copyTitleTo(anotherTitle);

    // no delete -> memory leaks
    delete copyDoc;

    console << "The new title is " << anotherTitle;
}
