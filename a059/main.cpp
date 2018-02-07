#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b,ans=0;
        scanf("%d %d",&a,&b);
        for(int j=a;j<=b;j++){
            for(int k=1;k<=j;k++){
                if(k*k==j){ans+=j;break;}
            }
        }
        cout << "Case " << i <<": " << ans << endl;
    }
    return 0;
}