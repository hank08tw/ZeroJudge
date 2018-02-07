#include <iostream>
#include <vector>
using namespace std;
int main() {
    string input;
    vector<string> data;
    vector<string> ::iterator it;
    while(cin >> input){
        data.push_back (input);
    }
    for(it=data.begin ();it!=data.end ();it++){
        cout << "hello, ";
        cout << *it << endl;
    }
    return 0;
}