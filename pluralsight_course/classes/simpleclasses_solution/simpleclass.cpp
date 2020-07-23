#include <iostream>
#include "Account.h"
using namespace std;

int main(){
    Account a1;
    a1.Deposit(90);
    cout << "After depositing $90" << endl;
    for(auto s:a1.Report()){
        cout << s << endl;
    }
    a1.Withdraw(5);
    if (a1.Withdraw(100)){
        cout << "true" << endl;
    }
    cout << "after withdrawing $50 then $100"
    for(auto s:a1.Report()){
        cout << s << endl;
    }
    return 0;
}