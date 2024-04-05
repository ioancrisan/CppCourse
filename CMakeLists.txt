cmake_minimum_required(VERSION 3.27)
project(Vorlesung2)

set(CMAKE_CXX_STANDARD 23)

add_library(UI STATIC
        UI/AbstractConsole.h
        UI/Console.cpp
        UI/Console.h
)

add_library(Documents STATIC
        Document.cpp
        Document.h
        Invoice.cpp
        Invoice.h
        HasContent.h
        HasTitle.h
        Newspaper.cpp
        Newspaper.h
        HasTitle.cpp
)

add_library(WorkWithDocs STATIC
        WorkWithDocs.cpp
        WorkWithDocs.h
        WorkWithInheritanceAndVirtualMethods.cpp
        WorkWithInheritanceAndVirtualMethods.h
        WorkWithAbstractions.cpp
        WorkWithAbstractions.h
)

add_library(mymath mymath/ArithmeticException.cpp mymath/ArithmeticException.h)

add_executable(Vorlesung2 main.cpp)

target_link_libraries(WorkWithDocs Documents UI)

target_link_libraries(Vorlesung2 Documents WorkWithDocs mymath)

add_subdirectory(Google_tests)
