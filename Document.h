//
// Created by ICR on 08.03.2024.
//

#ifndef VORLESUNG2_DOCUMENT_H
#define VORLESUNG2_DOCUMENT_H

#include <string>
#include "HasContent.h"
#include "HasTitle.h"

using namespace std;

class Document : public HasContent, public HasTitle {
private:
    string title;
    string content;

public:
    Document(string title, string content);
    Document(string content);

    ~Document();

    virtual string getContent() const;
    virtual string getTitle() const;
    void setTitle(string title);
    void readTitle();
    void copyTitleTo(string &newTitle) const;
};


#endif //VORLESUNG2_DOCUMENT_H
