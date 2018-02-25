#include <iostream>
using namespace std;
long long gcd(long long a,long long b){
    if(a&&b)while((a%=b)&&(b%=a));;
    return a+b;
}
long long lcm(long long a,long long b){
    if(a&&b)return (a*b)/gcd(a,b);
    return 0;

}
int main() {
    int n;
    while(cin >> n){
        if(n==0)break;
        long long array[10];
        for(int i=0;i<n;i++){
            cin >> array[i];
        }
        //cout << array[0] << " " << array[1] << endl;
        long long ans=lcm(array[0],array[1]);
        for(int i=2;i<n;i++){
            ans=lcm(ans,array[i]);
        }
        cout << ans << endl;
    }
    return 0;
}