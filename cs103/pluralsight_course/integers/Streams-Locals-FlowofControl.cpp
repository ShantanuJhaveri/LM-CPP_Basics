#include <iostream>
using namespace std;

int main() {
    // cout << 2 * 5;
    // cout << endl;
    // cout << "hello";

    // cout << endl;

    // int i;
    // i=3;
    // cout << i << endl;

    // int j=2;
    // cout << j << endl;

    // float f=4.9;
    // cout << f << endl;
    // f = 9.0/5;
    // this allows so that you can preserve the data as a decimal instead of it just giving you 1.
    //  Regularly, this expression 9/5 will not print something with decimals because it wont 

    // operator commands :
        // > greater than
        // >= greater than equal to
        // == equal to
        // != not equal to

    int i;
    int j;
    cout << "enter a number: ";
    cin >> i;
    cout << i;
    cout << "you have entered: " << i << ". Enter another number";
    cin >> j;

    if (i<j){
        cout << "the first number, " << i << " is less than the second number, " << j;
    }
    else {
        cout << "the first number, " << i << "is not less than the second number, " << j;
    }
    if (i==j) {
        cout << "the first number, " << i << "is equal to second number, " << j;
    }
    if (i>j) {
        cout << "the first number, " << i << "is greater to second number, " << j;
    }
    return 0;
}
 