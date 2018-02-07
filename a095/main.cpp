#include <iostream>
using namespace std;
int main() {
    int N,M;
    while(scanf("%d",&N)!=EOF){
        scanf("%d",&M);
        if(M==N)cout << M << endl;
        else{cout << M+1 <<endl;}
    }
    return 0;
}