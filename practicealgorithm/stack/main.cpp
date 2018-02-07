#include <iostream>
using namespace std;
int main() {
    char charactor[101];
    int len;
    cin >> charactor;
    len=strlen(charactor);
    int flag=0;
    if(len%2==0){
        for(int i=len/2;i<=len-1;i++){
            if(charactor[i]!=charactor[len-i-1]){
                flag=1;
                break;
            }
        }
    }
    else{
        for(int i=(len+1)/2;i<=len-1;i++){
            if(charactor[i]!=charactor[len-i-1]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){cout << "回文！" << endl;}
    else{cout << "不是回文"<< endl;}
    return 0;
}