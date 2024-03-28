//
// Created by ICR on 22.03.2024.
//

#ifndef VORLESUNG2_HASCONTENT_H
#define VORLESUNG2_HASCONTENT_H

#include <string>

using namespace std;

class HasContent {
public:
    virtual string getContent() const = 0;  // abstract method
};


#endif //VORLESUNG2_HASCONTENT_H
