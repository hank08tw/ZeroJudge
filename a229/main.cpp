#include <iostream>
#include <vector>
using namespace std;
char data[27];//0代表左括弧，1代表右括弧
void dfs(int n,int right,int left,int i){
    if(i==n+1){
        for(int a=1;a<i;a++){
            printf("%c",data[a]);
        }
        printf("\n");
        return;
    }
    if(left<right&&left>0){
        data[i]='(';
        dfs(n,right,left-1,i+1);
        data[i]=')';
        dfs(n,right-1,left,i+1);

    }
    else if(left==right){
        data[i]='(';
        dfs(n,right,left-1,i+1);
    }
    else{
        data[i]=')';
        dfs(n,right-1,left,i+1);
    }
}
int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        dfs(n*2,n,n,1);
        printf("\n");
    }
    return 0;
}