#include <iostream>
using namespace std;
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    cout << ((a%2==1&&b%2==1) ? ((b-a)/2) : (b-a)/2+1);
    return 0;
}