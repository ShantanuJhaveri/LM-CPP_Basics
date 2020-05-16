#include <iostream>
using namespace std;

int main() {
    int answer = 7;
    bool keepGoing = true;
    int attempt;
    cout << "This is the number guessing game in console. Guess a number and I will tell you where you are off. Without any hints, ";
    while (keepGoing){
        cout << "Guess a number between 0-9:" << endl;
        cin >> attempt;
        if (attempt < answer){
            cout << "Your guess was too low. Try again" << endl;
        }
        if (attempt > answer){
            cout << "Your guess was too high. Try again" << endl;
        }
        if (attempt == answer) {
            cout << "Your guess was right on the dot. Your guess was " << attempt << "and the correct answer was " << answer << endl;
            keepGoing = false;
        }
    }
    return 0;
}