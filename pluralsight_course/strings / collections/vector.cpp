#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for sort and count

using namespace std;

int main() {
    vector<int> vi;
    for (int i=0; i<10; i++){
        vi.push_back(i);
    }

    for (auto item:vi){
        cout << item << " ";
    }
    cout << endl;

    vector<string> vs;
    cout << "enter three words ";
    for (int i=0; i<3; i++){
        string s;
        cin >> s;
        vs.push_back(s);
    }

    for(auto item:vs){
        cout << item << " ";
    }
    cout << endl;

    cout << "int vecctor vi has " << vi.size() << " elements";

    vi[5]=3;
    vi[6]=-1;
    vi[1]=99;

    for(auto item:vi){
        cout << item << " ";
    }
    
    // for(unsigned int i=0; i<vi.size(); i++)
    // {
    //     cout << vi[i] << " ";
    // }
    // cout << endl;

    // for(auto i = begin(vi); i != end(vi); i++)
    // {
    //     cout << *i << " ";
    // }
}