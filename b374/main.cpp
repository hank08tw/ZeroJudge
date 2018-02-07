#include <iostream>
#include <fstream>
#include <memory.h>
using namespace std;
int num[30001]={0};
int main() {
    int N,tmp;
    while(scanf("%d",&N)!=EOF){
        int biggest=0;
        memset(num,0,30001);
        scanf("%d",&tmp);
        biggest=1;
        num[tmp]++;
        for(int i=2;i<=N;i++){
            scanf("%d",&tmp);
            num[tmp]++;
            if(num[tmp]>biggest)biggest=num[tmp];
        }
        for(int i=1;i<=30000;i++){
            if(num[i]==biggest){
                cout << i << " " << num[i] << endl;
            }
        }
    }
    return 0;
}