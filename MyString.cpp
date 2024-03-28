//
// Created by ICR on 08.03.2024.
//

#include <cstring>
#include "MyString.h"

char *MyString::toCharArray() {
    return internalString;
}

int MyString::getLength() {
    return length;
}

MyString &MyString::concat(char *other) {
    // todo
    length = length + strlen(other);
    return *this;
}
