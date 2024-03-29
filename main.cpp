#include <iostream>
#include <vector>
#include "Document.h"
#include "Invoice.h"
#include "Newspaper.h"
#include "WorkWithDocs.h"
#include "UI/Console.h"

int main() {

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

    return 0;
}


