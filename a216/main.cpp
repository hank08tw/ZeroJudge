#include <iostream>
using namespace std;
int f[30001]={0};
long g[30001]={0};
int main() {
    int num;
    f[1]=1;
    g[1]=1;
    for(int i=2;i<=30000;i++){
        f[i]=f[i-1]+i;
        g[i]=f[i]+g[i-1];
    }
    while(scanf("%d",&num)!=EOF){
        cout << f[num] << " " << g[num] << endl;
    }
    return 0;
}