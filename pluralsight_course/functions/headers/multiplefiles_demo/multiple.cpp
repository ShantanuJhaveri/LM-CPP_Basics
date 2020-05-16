#include <iostream>
using namespace std;

double add(double x, double y){
    return x+y;
}

double add(double a, double b, double c){
    return a + b + c;
}

bool test (bool x){
    return x;
}

bool test (double x){
    return x>0;
}

//  void style doesnt return anything. IDK what you would need this for yet, but you may need it
void test(int y){
    return;
}