//
// Created by ICR on 28.03.2024.
//
#include "gtest/gtest.h"
#include "../Document.h"

class DocumentFixture : public ::testing::Test {

protected:
    void SetUp() override
    {
        testDoc = new Document("test content");
    }

    void TearDown() override {
        delete testDoc;
    }

    Document * testDoc;
};

TEST_F(DocumentFixture, GetContent_InConstructor){

    ASSERT_EQ(testDoc->getContent(), "test content");
}

TEST_F(DocumentFixture, GetTitle_AfterChange){

    testDoc->setTitle("test");

    ASSERT_EQ(testDoc->getTitle(), "test");
}
