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

int main(){
    auto a = add(3,4);
    cout << "3+4 is " << a << endl;
    double b = add(1.2,3.4);
    cout << "1.2+3.4 is " << b << endl;
    auto c = add(1.1,2.2,3.3);
    cout << "1.1+2.2+3.3 is " << c << endl;

    if (test(true)){
        cout << "true passes the test" << endl;
    }
    if (test(3.2)){
        cout << "3.2 passes the test" << endl;
    }
    return 0;
}