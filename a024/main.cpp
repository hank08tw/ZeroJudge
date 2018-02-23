#include <iostream>
using namespace std;
int main() {
    long long a,b;
    while(cin >> a >> b){
        if(a&&b)while((a%=b)&&(b%=a));
        cout << a+b << endl;
    }
}