#include <iostream>
using namespace std;
int main() {
    long n,tmp;
    while(scanf("%ld",&n)!=EOF){
        long double all=0;
        for(int i=0;i<n;i++){
            scanf("%ld",&tmp);
            all+=tmp;
        }
        if((all/n)>59)cout << "no" << endl;
        else cout << "yes" << endl;
    }
    return 0;
}