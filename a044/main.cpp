#include <iostream>
using namespace std;
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=2;
        for(int i=2;i<=n;i++){
            int tmp=2;
            for(int j=3;j<=i;j++){
                tmp+=(j-1);
            }
            ans+=tmp;
        }
        cout << ans << endl;
    }
    return 0;
}