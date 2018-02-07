#include <iostream>
using namespace std;
int main() {
    bool num[10]={false};
    int ans[4];
    int tar;
    int tmp;
    int n;
    scanf("%d",&tar);
    for(int i=0;i<4;i++) {
        ans[i]=tar%10;
        num[tar%10]=true;
        tar/=10;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a=0,b=0;
        scanf("%d",&tmp);
        for(int j=0;j<4;j++){
            if(tmp%10==ans[j])a++;
            else if(num[tmp%10])b++;
            tmp/=10;
        }
        cout << a << "A" << b << "B" << endl;
    }
    return 0;
}