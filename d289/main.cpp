#include <iostream>
#include <memory.h>
using namespace std;
int data[8]={1,13,33,43,139,169,1309,2597};
long long dp[8001];

int main() {
    int num;
    memset(dp,0, sizeof (dp));
    dp[0]=1;
    //bottom up method
    for(int i=0;i<8;i++){
        for(int j=data[i];j<=8000;j++){
            dp[j]+=dp[j-data[i]];
        }
    }
    while(scanf("%d",&num)!=EOF){
        cout << dp[num] << endl;
    }
    return 0;
}