#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
    int x;
    cout << "enter a number" << endl;
    cin >> x;

    bool  prime = true;
    for (int i=2; i<=x/i; i++)
    {
        cout << i << endl;
        int factor = x/i;
        if (factor*i == x)
        {
            cout << "factor found " << i << " * " << factor <<endl;
            prime = false;
//            break;
        }
    }

    cout << x << " is ";
    if (prime) cout << "prime" << endl;
    else cout << "Not prime" << endl;
    return 0;

}
