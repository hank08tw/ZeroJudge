#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
    string str;
    while(cin >> str){
        bool special=false;
        if(str=="0")break;
        int sum=0;
        for(int i=0;i<str.size ();i++){
            if((str[i]>=97&&str[i]<=122)){
                sum+=str[i]-96;
            }
            else if((str[i]>=65&&str[i]<=90)){
                sum+=str[i]-64;
            }
            else{
                special=true;
            }
        }
        if(special)cout << "Fail" << endl;
        else cout << sum << endl;
    }
    return 0;
}