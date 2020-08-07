//
// Created by Shantanu Jhaveri on 8/6/20.
//

#ifndef UNTITLED_TWEETER_H
#define UNTITLED_TWEETER_H

#pragma once
#include "Person.h" // have to include Person.h otherwise it doesnt know where to get the class from
#include <string>


class Tweeter: public Person { // declares class Tweeter, but says it inherents from Person class
private:
    std::string twitterhandle;
public:
    Tweeter(std::string first, std::string last, int random, std::string handle); // added constructor
    ~Tweeter(); // deconstructor


};


#endif //UNTITLED_TWEETER_H
