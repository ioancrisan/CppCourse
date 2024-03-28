//
// Created by ICR on 08.03.2024.
//

#ifndef VORLESUNG2_MYSTRING_H
#define VORLESUNG2_MYSTRING_H


class MyString {
private:
    char* internalString;
    int length;

public:
    char* toCharArray();
    int getLength();
    MyString& concat(char* other);
};


#endif //VORLESUNG2_MYSTRING_H
