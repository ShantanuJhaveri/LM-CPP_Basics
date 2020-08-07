#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {
    int x = 99;
    cout << "enter a number, 0 or negative to quit" << endl;
    while (x>0)
    {
        cin >> x;
        string sign = x>0? "positive":"not positive";
        cout << "your number is " << sign << endl;
    }
    return 0;

}
