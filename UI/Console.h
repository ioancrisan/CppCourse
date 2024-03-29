//
// Created by ICR on 29.03.2024.
//

#ifndef VORLESUNG2_CONSOLE_H
#define VORLESUNG2_CONSOLE_H


#include "AbstractConsole.h"

class Console : public AbstractConsole {
public:
    AbstractConsole& operator << (const string& value) override;
    AbstractConsole& operator << (int value) override;

    AbstractConsole& operator >> (string& value) override;
};


#endif //VORLESUNG2_CONSOLE_H
