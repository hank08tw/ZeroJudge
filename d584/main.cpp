#include <iostream>
using namespace std;
int main() {
    int a,b;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if(a==0){cout << "0" << endl;}
        else if(a==1||a==3||a==4){
            if(b<10)cout << "0";
            else if(b>=10&&b<30)cout << (b-10)*3+1;
            else if(b>=30&&b<70)cout << (b-10)*3+2;
            else if(b>=70&&b<120)cout << (b-10)*3+3;
            else if(b>=120&&b<=200)cout << (b-10)*3+6;
            cout << endl;
        }
        else if(a==2){
            if(b<8)cout << "0";
            else if(b>=8&&b<30)cout << (b-8)*3+1;
            else if(b>=30&&b<70)cout << (b-8)*3+2;
            else if(b>=70&&b<120)cout << (b-8)*3+3;
            else if(b>=120&&b<=200)cout << (b-8)*3+6;
            cout << endl;
        }
    }
    return 0;
}