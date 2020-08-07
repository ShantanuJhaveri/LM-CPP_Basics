//
// Created by Shantanu Jhaveri on 8/6/20.
//
#pragma once
#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int random): firstname(first), lastname(last), randomNumber(random)
{
    std::cout << "constructing " << firstname << " " << lastname << std::endl;
};

Person::Person() : randomNumber(0){
    std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::~Person() {
    std::cout << "deconstructing " << firstname << " " << lastname << std::endl;
}

std::string Person::getName() {
    return firstname + " " + lastname;
}