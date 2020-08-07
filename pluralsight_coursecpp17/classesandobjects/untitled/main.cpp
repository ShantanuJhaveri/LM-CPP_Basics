#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#pragma once

int main() {
    std::cout << "Hello, World!" << std::endl;

    Person p1("Shantanu","Jhaveri",123);
    {
        Tweeter t1("Someone","Else",456,"@whomever");
        std::string name2 = t1.getName();
    }
    std::cout << "after innermost block" << std::endl;
    std::string name = p1.getName();


    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::ok;
    ne = NetworkError::ok;


    return 0;
}
