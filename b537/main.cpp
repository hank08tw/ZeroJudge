#include <iostream>
using namespace std;
int main() {
    double a,b;
    double data[1000000]={0};
    data[1]=1;
    while(scanf("%lf",&a)!=EOF){
        scanf("%lf",&b);
        if(a/b==1){cout << data[1] << endl;}
        else{
            int i=1;
            while(true){
                i++;
                if(i%2==0){
                    data[i]=1+data[i/2];
                }
                else{
                    data[i]=1/data[i-1];
                }
                if(data[i]==a/b){cout << i << endl;
                    break;}
            }
        }
    }
    return 0;
}