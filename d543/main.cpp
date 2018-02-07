#include <iostream>
#include <memory.h>
using namespace std;
int n;
bool xline[21];
bool yline[21];
bool leftupline[40];
bool leftdownline[40];
void dfs(int dep,int* ans){
    if(dep==n){(*ans)++;}
    else{
        for(int i=0;i<n;i++){
            /*
            bool conflict=false;
            for(int j=0;j<dep;j++){
                if(i==data[j]||abs(i-data[j])==dep-j){
                    conflict=true;
                    break;
                }
            }
            if(!conflict){
                data[dep]=i;
                dfs(data,dep+1,ans);
            }
             */
            int leftup=dep-i+n;
            int leftdown=dep+i+1;
            if(!leftupline[leftup] and !leftdownline[leftdown] and !xline[i+1] and !yline[dep+1]){
                leftupline[leftup]= true;
                leftdownline[leftdown]=true;
                xline[i+1]=true;
                yline[dep+1]=true;
                dfs(dep+1,ans);
                leftupline[leftup]= false;
                leftdownline[leftdown]=false;
                xline[i+1]=false;
                yline[dep+1]=false;
            }

        }
    }
}
int main() {
    while(scanf("%d",&n)!=EOF){
        //const int con_n=n;
        memset(xline,0,sizeof(xline));
        memset(yline,0,sizeof(yline));
        memset(leftupline,0,sizeof(leftupline));
        memset(leftdownline,0,sizeof(leftdownline));
        int ans=0;
        dfs(0,&ans);
        cout << ans << endl;
    }
    return 0;
}