#include <iostream>
using namespace std;
int main() {
    long num;
    while(scanf("%ld",&num)!=EOF){
        if(num%2==0)cout << "Even" << endl;
        else cout << "Odd" << endl;
    }
    return 0;
}