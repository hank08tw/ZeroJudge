#include <iostream>
using namespace std;
int main() {
    int n,tmp;
    while(scanf("%d",&n)!=EOF){
        long long sum=0;
        for(int i=1;i<=n;i++) {
            scanf ("%d", &tmp);
            sum+=tmp*i;
        }
        cout << sum << endl;
    }

    return 0;
}