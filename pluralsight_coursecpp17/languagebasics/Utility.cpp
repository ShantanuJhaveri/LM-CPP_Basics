//
// Created by Shantanu Jhaveri on 8/6/20.
//
#pragma  once
#include <iostream>
#include "Utility.h"
using std::cout;
using std::cin;
using std::endl;

bool IsPrime(int x)
{
    bool prime = true;
    for(int i=2;i<=x/i;i++){
        int factor = x/i;
        if (factor*i==x){
            cout << "factor found: " << factor << endl;
            prime = false;
            break;
        }
    }
    return prime;
}
