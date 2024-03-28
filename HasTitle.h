//
// Created by ICR on 22.03.2024.
//

#ifndef VORLESUNG2_HASTITLE_H
#define VORLESUNG2_HASTITLE_H

#include <string>

using namespace std;

class HasTitle {
public:
    virtual string getTitle() const = 0;

    string operator + (const HasTitle& other) const;
};


#endif //VORLESUNG2_HASTITLE_H
