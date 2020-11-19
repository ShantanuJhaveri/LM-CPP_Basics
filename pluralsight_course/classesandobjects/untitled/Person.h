//
// Created by Shantanu Jhaveri on 8/6/20.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>
#pragma once

class Person {
private:
    std::string firstname;
    std::string lastname;
    int randomNumber;

public:
    Person(std::string first, std::string last, int random);
    ~Person();
    std::string getName() const;
    int getNumber() const {return randomNumber;};
    void setNumber(int number) {randomNumber = number;};

};


#endif //UNTITLED_PERSON_H
