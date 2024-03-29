//
// Created by ICR on 29.03.2024.
//

#include <iostream>
#include "Console.h"

AbstractConsole &Console::operator<<(const string &value) {
    cout << value;
    return *this;
}

AbstractConsole &Console::operator>>(string &value) {
    cin >> value;
    return *this;
}

AbstractConsole &Console::operator<<(int value) {
    cout << value;
    return *this;
}
