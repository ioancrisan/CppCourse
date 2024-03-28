//
// Created by ICR on 22.03.2024.
//

#ifndef VORLESUNG2_NEWSPAPER_H
#define VORLESUNG2_NEWSPAPER_H


#include "HasTitle.h"

class Newspaper : public HasTitle {
public:
    virtual string getTitle() const;
};


#endif //VORLESUNG2_NEWSPAPER_H
