//
// Created by ICR on 05.04.2024.
//

#include <iostream>
#include <vector>
#include "WorkWithAbstractions.h"
#include "UI/Console.h"
#include "WorkWithDocs.h"
#include "Invoice.h"
#include "Newspaper.h"


void workWithAbstractions() {
    Console console;
    workWithDocs(console);

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
}


