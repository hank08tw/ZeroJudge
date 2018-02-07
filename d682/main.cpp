#include <iostream>
using namespace std;
int num[3000001];
int min_val=0;
void backpack(int V,int n){
    if(n==0)return;
    if(V<min_val)min_val=V;
    if(V-num[n]>=0)backpack (V-num[n],n-1);
    backpack(V,n-1);
}
int main() {
    int V,n;
    while(scanf("%d",&V)!=EOF){
        min_val=V;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&num[i]);
        }
        backpack(V,n);
        cout << min_val << endl;
    }
    return 0;
}