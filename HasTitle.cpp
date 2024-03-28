//
// Created by ICR on 22.03.2024.
//

#include "HasTitle.h"

// operator overloading
string HasTitle::operator + (const HasTitle &other) const {
    return this->getTitle() + " " + other.getTitle();
}
