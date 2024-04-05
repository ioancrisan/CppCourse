//
// Created by ICR on 05.04.2024.
//

#include "ArithmeticException.h"

namespace mymath {
    ArithmeticException::ArithmeticException(string message) {
        this->message = message;
    }

    string ArithmeticException::getMessage() const {
        return message;
    }
} // mymath