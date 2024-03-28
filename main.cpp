#include <iostream>
#include <vector>
#include "Document.h"
#include "Document.h"
#include "Invoice.h"
#include "Newspaper.h"

void workWithDocs();
void workWithInheritanceAndVirtualMethods();

void readTitle(Document& d) {
    d.readTitle();
}

void readTitle(Document* d) {
    d->readTitle();
    // this is actually the same: (*d).readTitle();
}

int main() {
    // workWithDocs();

    // workWithInheritanceAndVirtualMethods();

    vector<HasTitle*> list;

    list.push_back(new Invoice("hello"));
    list.push_back(new Document("my doc", "my content"));
    list.push_back(new Newspaper());

    for(auto item: list) {
        cout << item->getTitle() << endl;
    }

    // operator overloading
    cout << list[0]->getTitle() + list[1]->getTitle();

    return 0;
}

void workWithInheritanceAndVirtualMethods() {
    auto pInvoice = new Invoice("pInvoice!");

    Document* pDoc = pInvoice;

    cout << "invoice title:" << pInvoice->setClient("new client")->getTitle()
         << endl << "client: " << pInvoice->getClient() << endl;

    cout << "doc title:" << pDoc->getTitle() << endl << pDoc ->getContent() << endl;

    HasContent* pHasContent = pDoc;

    cout << "content: " << pHasContent->getContent() << endl;
}

void workWithDocs() {
    auto originalDoc = new Document("content"); // allocated over heap, not stack!
    auto copyDoc = originalDoc;

    readTitle(*copyDoc);
    cout << "You provided " << copyDoc->getTitle() << " with length " << copyDoc->getTitle().length() << endl;

    // delete too early -> memory access violation
    // delete copyDoc;

    string anotherTitle;
    copyDoc->copyTitleTo(anotherTitle);

    // no delete -> memory leaks
    delete copyDoc;

    cout << "The new title is " << anotherTitle;
}
