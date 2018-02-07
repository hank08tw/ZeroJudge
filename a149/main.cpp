#include <iostream>
using namespace std;
long long mult(int num){
    long long ans=1;
    while(num/10>=1){
        ans*=num%10;
        num=num/10;
    }
    ans*=num;
    return ans;
}
int main() {
    int T;
    cin >> T;
    int num;
    for(int i=0;i<T;i++){
        scanf("%d",&num);
        cout << mult(num) << endl;
    }
    return 0;
}