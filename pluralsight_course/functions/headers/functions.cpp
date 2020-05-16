#include <iostream>
using namespace std;

// int add(int x, int y){
//     return x+y;
// }

double add(double x, double y){
    return x+y;
}

int main(){
    // int a = add(3,4);
    auto a = add(3,4);
    cout << "3 + 4 is " << a << endl;
    double b = add(3.4,4.8);
    cout << "3.4 + 4.8 is " << b << endl;
    return 0;
}