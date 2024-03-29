//
// Created by ICR on 29.03.2024.
//

#ifndef VORLESUNG2_ABSTRACTCONSOLE_H
#define VORLESUNG2_ABSTRACTCONSOLE_H

#include <string>

using namespace std;

class AbstractConsole {
public:
    virtual AbstractConsole& operator << (const string& value) = 0;
    virtual AbstractConsole& operator << (int value) = 0;

    virtual AbstractConsole& operator >> (string& value) = 0;
};


#endif //VORLESUNG2_ABSTRACTCONSOLE_H
