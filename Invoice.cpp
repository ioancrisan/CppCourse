//
// Created by ICR on 15.03.2024.
//

#include "Invoice.h"

Invoice::Invoice(string content)
    : Document("doc title", content) {
}

Invoice::Invoice(string title, string content)
    : Document(title, content) {
}

string Invoice::getClient() {
    return this->client;
}

const Invoice* Invoice::setClient(const string &client) {
    this->client = client;
    return this;
}

int Invoice::getNumber() {
    return number;
}

const Invoice *Invoice::setNumber(int number) {
    this->number = number;
    return this;
}

string Invoice::getTitle() const {
    return Document::getTitle() + " " + std::to_string(number);
}
