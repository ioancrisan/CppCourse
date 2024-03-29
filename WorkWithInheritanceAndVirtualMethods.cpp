//
// Created by ICR on 28.03.2024.
//

#include <iostream>
#include "WorkWithInheritanceAndVirtualMethods.h"
#include "Invoice.h"

void workWithInheritanceAndVirtualMethods() {
    auto pInvoice = new Invoice("pInvoice!");

    Document* pDoc = pInvoice;

    cout << "invoice title:" << pInvoice->setClient("new client")->getTitle()
         << endl << "client: " << pInvoice->getClient() << endl;

    cout << "doc title:" << pDoc->getTitle() << endl << pDoc ->getContent() << endl;

    HasContent* pHasContent = pDoc;

    cout << "content: " << pHasContent->getContent() << endl;
}
