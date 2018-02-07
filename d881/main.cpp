#include <iostream>
using namespace std;
int main() {
    int d;
    while(scanf("%d",&d)!=EOF){
        int all=1;
        int ans=1;
        int dis=1;
        for(int i=2;i<=50;i++){
            ans+=dis;
            dis+=d;
            all+=ans;
        }
        cout << all << endl;
    }
    return 0;
}