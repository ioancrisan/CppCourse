#include <iostream>
#include <vector>
#include <valarray>
#include <functional>
#include <map>
#include "Document.h"
#include "Invoice.h"
#include "Newspaper.h"
#include "WorkWithDocs.h"
#include "UI/Console.h"
#include "mymath/ArithmeticException.h"

void foo(const string &op);

using namespace mymath;

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        throw ArithmeticException("Divide by 0");
    }
    return a / b;
}

int main() {

    string op;
    int first, second;

    cin >> op >> first >> second;
    string powExceptionMessage = "0 is not allowed";

    std::map<string, std::function<int (int, int)>> fnMap;
    fnMap.insert(std::make_pair("+", sum));
    fnMap.insert(std::make_pair("-", subtract));
    fnMap.insert(std::make_pair("*", multiply));
    fnMap.insert(std::make_pair("/", divide));
    fnMap.insert(std::make_pair("^", [=](int x, int y) -> int {
        if (x == 0)
            throw ArithmeticException(powExceptionMessage);
        return pow(x, y);
    }));

    try {
        auto func = fnMap[op];

        cout << "Result is: " << func(first, second);
    }
    catch (const ArithmeticException& ex) {
        cout << ex.getMessage();
    }

    return 0;
}
