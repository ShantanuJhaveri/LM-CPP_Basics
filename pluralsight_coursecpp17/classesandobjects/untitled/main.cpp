#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Person p1("Shantanu","Jhaveri",123);
    {
        Tweeter t1("Someone","Else",456,"@whomever");
    }
    std::cout << "after innermost block" << std::endl;
    std::cout << "p1: " << p1.getName() << " " << p1.getNumber() << std::endl;
    p1.setNumber(124);
    std::cout << "p1: " << p1.getName() << " " << p1.getNumber() << std::endl;

//    FileError fe = FileError::notfound;
//    fe = FileError::ok;
//    NetworkError ne = NetworkError::ok;
//    ne = NetworkError::ok;


    return 0;
}
