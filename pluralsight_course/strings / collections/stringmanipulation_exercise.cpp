#include <iostream>
#include <string>
using namespace std;

int main(){
    int keepGoing;
    cout << "This is the phrase comparing function. This function will tell you which phrase you write is longer." << endl;
    while (keepGoing){
        string word1, word2;
        cout << "Enter a phrases you would like to compare (press 0 to stop): " << endl;
        getline(cin,word1);
        cout << "Enter another phrase: (press 0 again to confirm stop)" << endl;
        getline(cin,word2);
        if(word1 == "0" || word2 == "0"){
            keepGoing = false;
        }
        if(word1.length() > word2.length()){
            cout << "\"" + word1 + "\"" << " is longer than " << "\"" + word2 + "\"" << endl;
        }
        if(word1.length() < word2.length()){
            cout << "\"" + word2 + "\"" << " is longer than " << "\"" + word1 + "\"" << endl;
        }
        if(word1.length() == word2.length()){
            cout << "\"" + word1 + "\"" << " is the same lenght as the word " << "\"" + word2 + "\"" << endl;
        }
    }
    return 0;
}