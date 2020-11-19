//
// Created by Shantanu Jhaveri on 8/6/20.
//
#pragma once
#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string first, std::string last, int random, std::string handle) // four paramater constructor
:
Person(first,last,random),twitterhandle(handle) // first 3 parameters are inherented by "Person" class, and the last one comes from the new "T
{
    std::cout << "constructing handle " << twitterhandle << std::endl;
}

Tweeter::~Tweeter() {
    std::cout << "deconstructing handle " << twitterhandle <<std::endl;
}