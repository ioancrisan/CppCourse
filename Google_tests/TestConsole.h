//
// Created by ICR on 29.03.2024.
//

#ifndef VORLESUNG2_TESTCONSOLE_H
#define VORLESUNG2_TESTCONSOLE_H


#include <vector>
#include "../UI/AbstractConsole.h"

class TestConsole : public AbstractConsole {
private:
    string output;
    int currentInput { 0 };
    vector<string> inputs;
public:
    TestConsole();
    TestConsole(vector<string> inputs);

    AbstractConsole& operator << (const string& value) override;
    AbstractConsole& operator << (int value) override;

    AbstractConsole& operator >> (string& value) override;

    string getOutput();
};


#endif //VORLESUNG2_TESTCONSOLE_H
