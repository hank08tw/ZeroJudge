#include <iostream>
using namespace std;
int main() {
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;
        for(int i=1;i<n;i++){
            if(i%7!=0){cout << i << " ";}
        }
        cout << endl;
    }
    return 0;
}