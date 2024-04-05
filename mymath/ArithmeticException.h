//
// Created by ICR on 05.04.2024.
//

#ifndef VORLESUNG2_ARITHMETICEXCEPTION_H
#define VORLESUNG2_ARITHMETICEXCEPTION_H

#include <string>

using namespace std;

namespace mymath {

class ArithmeticException : public exception {
    private:
        string message;

    public:
        explicit ArithmeticException(string message);

        string getMessage() const;
    };

} // mymath

#endif //VORLESUNG2_ARITHMETICEXCEPTION_H
