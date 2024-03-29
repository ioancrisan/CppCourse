//
// Created by ICR on 08.03.2024.
//

#include <iostream>
#include "Document.h"

// definition

// end definition

std::string Document::getTitle() const {
    return this->title;
}

void Document::setTitle(const string &title) {
    this->title = title;
}

void Document::copyTitleTo(std::string &newTitle) const {
    newTitle = title;
}

Document::Document(string title, string content) {
    this->title = title;
    this->content = content;
}

Document::Document(string content) {
    this->content = content;
}

Document::~Document() {
    cout << endl << "ich muss sterben... (" << this << ")." << endl;
}

string Document::getContent() const {
    return content;
}
