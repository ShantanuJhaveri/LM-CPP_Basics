//
// Created by Shantanu Jhaveri on 8/6/20.
//
#pragma once
#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int random): firstname(first), lastname(last), randomNumber(random)
{
    std::cout << "constructing " << getName() << std::endl;
};

Person::~Person() {
    std::cout << "deconstructing " << getName() << std::endl;
}

std::string Person::getName() const
{
    return firstname + " " + lastname;
}