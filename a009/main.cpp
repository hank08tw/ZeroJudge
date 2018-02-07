#include <iostream>
using namespace std;
int main() {
    string data;
    while(cin >> data){
        for(int i=0;i<data.length ();i++){
            cout << (char)(data[i]-7);
        }
        cout << endl;
    };
    return 0;
}