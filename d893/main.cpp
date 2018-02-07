#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long long last=-1;
    int a,b,c,d,e,f;
    while(scanf("%d",&a)!=EOF){
        bool no_sol=true;
        scanf("%d %d %d %d %d",&b,&c,&d,&e,&f);
        if(a==b&&b==c&&c==d&&d==e&&e==f){
            cout << "Too many... = =\"" << endl;continue;
        }
        for(int i=-40;i<=40;i++){
            long long tmp=a*(long long)pow(i,5)+b*(long long)pow(i,4)+c*(long long)pow(i,3)+d*(long long)pow(i,2)+e*i+f;
            if(tmp==0){cout << i << " " << i << endl;no_sol=false;}
            else if(last!=-1&&last*tmp<0){cout << i-1 << " " << i<< endl;no_sol=false;}
            last=tmp;
        }
        if(no_sol){
            cout << "N0THING! >\\\\\\<"<< endl;
        }
    }
    return 0;
}