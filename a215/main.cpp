#include <iostream>
using namespace std;
int main() {
    int n,m;
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&m);
        long long sum=n;
        n++;
        int num=1;
        while(sum<=m){
            sum+=n;
            n++;
            num++;
        }
        cout << num << endl;
    }
    return 0;
}