#include <iostream>
using namespace std;
int dp[101]={0};
struct item{
    int vol;
    int val;
};
int main() {
    int n;
    cin >> n;
    const int con_n=n;
    item food[con_n];
    for(int i=0;i<n;i++){
        cin >> food[i].vol;
        cin >> food[i].val;
    }
    for(int i=0;i<n;i++){
        for(int j=100;j>=food[i].vol;j--){
            dp[j]=max(dp[j],dp[j-food[i].vol]+food[i].val);
        }
    }
    int max=0;
    for(int i=0;i<101;i++){
        if(dp[i]>max)max=dp[i];
    }
    cout << max << endl;
    return 0;
}