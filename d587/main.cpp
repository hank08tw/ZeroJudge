#include <iostream>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int num[4]={0};
        for(int i=0;i<n;i++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp==1)num[1]++;
            else if(tmp==2)num[2]++;
            else if(tmp==3)num[3]++;
        }
        for(int i=1;i<=3;i++){
            for(int j=1;j<=num[i];j++){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}