#include <iostream>
using namespace std;
int main() {
    int num;
    while(scanf("%d",&num)!=EOF){
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0)sum+=i;
        }
        if(sum>num)cout << "盈數" << endl;
        else if(sum==num)cout << "完全數" << endl;
        else if(sum<num)cout << "虧數" << endl;
    }
    return 0;
}