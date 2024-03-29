//
// Created by ICR on 28.03.2024.
//

#include "gtest/gtest.h"
#include "../WorkWithDocs.h"
#include "TestConsole.h"

TEST(WorkWithDocsTestSuite, UseTestConsole){

    vector<string> inputs;
    inputs.emplace_back("hello");
    TestConsole testConsole(inputs);
    workWithDocs(testConsole);

    ASSERT_EQ(testConsole.getOutput(), "You provided hello with length 5\nThe new title is hello");
}

TEST(WorkWithDocsTestSuite, UseTestConsoleOtherInput){

    vector<string> inputs;
    inputs.emplace_back("use abstractions");
    TestConsole testConsole(inputs);
    workWithDocs(testConsole);

    ASSERT_EQ(testConsole.getOutput(), "You provided use abstractions with length 16\nThe new title is use abstractions");
}
