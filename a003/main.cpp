#include <iostream>
using namespace std;
int main() {
    int a,b;
    while(cin >> a >> b){
        if((a*2+b)%3==0){
            cout << "普通";
        }
        else if((a*2+b)%3==1){
            cout << "吉";
        }
        else{
            cout << "大吉";
        }
        cout << endl;
    }
    return 0;
}