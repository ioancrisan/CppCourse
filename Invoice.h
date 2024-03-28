//
// Created by ICR on 15.03.2024.
//

#ifndef VORLESUNG2_INVOICE_H
#define VORLESUNG2_INVOICE_H


#include "Document.h"

class Invoice : public Document {
private:
    string client;
    int number { 0 };   // initialize number with 0
public:
    Invoice(string title, string content);
    explicit Invoice(string content);

    virtual string getTitle() const;
    string getClient();
    const Invoice* setClient(const string& client);

    int getNumber();
    const Invoice* setNumber(int number);
};


#endif //VORLESUNG2_INVOICE_H
