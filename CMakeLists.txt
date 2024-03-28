cmake_minimum_required(VERSION 3.27)
project(Vorlesung2)

set(CMAKE_CXX_STANDARD 23)

add_executable(Vorlesung2 main.cpp
        Document.cpp
        Document.h
        MyString.cpp
        MyString.h
        Invoice.cpp
        Invoice.h
        HasContent.h
        HasTitle.h
        Newspaper.cpp
        Newspaper.h
        HasTitle.cpp)
