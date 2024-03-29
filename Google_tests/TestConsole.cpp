//
// Created by ICR on 29.03.2024.
//

#include "TestConsole.h"

AbstractConsole &TestConsole::operator<<(const string &value) {
    output += value;
    return *this;
}

AbstractConsole &TestConsole::operator<<(int value) {
    output += std::to_string(value);
    return *this;
}

string TestConsole::getOutput() {
    return output;
}

AbstractConsole &TestConsole::operator>>(string &value) {
    if(currentInput >= inputs.size()) {
        value = "";
    }

    value = inputs[currentInput++];
    return *this;
}

TestConsole::TestConsole() = default;

TestConsole::TestConsole(vector<string> inputs) {
    this->inputs = inputs;
}