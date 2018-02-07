#include <iostream>
using namespace std;
int main() {
    int n,m;
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&m);
        if(m==0){cout << "Go Kevin!!" << endl;
            continue;}
        long sum=0;
        long i=1;
        while(sum<n){
            sum+=i;
            i+=m;
        }
        if(sum==n)cout << "Go Kevin!!" << endl;
        else cout << "No Stop!!" << endl;
    }
    return 0;
}