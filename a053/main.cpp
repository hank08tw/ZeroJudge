#include <iostream>
using namespace std;
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        if(n>=40)cout << "100" << endl;
        else if(n<40&&n>=21)cout << 80+n-20 << endl;
        else if(n<=20&&n>=11)cout << 60+2*(n-10) << endl;
        else if(n<=10&&n>=0)cout << n*6 << endl;
    }
    return 0;
}