#include <iostream>
#include <memory.h>
using namespace std;
//m皇后 n城堡 backtracking 重點在於 擺放皇后的時候要當前的位置沒衝突 且對角線沒有城堡 所以要往回搜
bool leftright[10]={false};
bool leftup[19]={false};
bool leftdown[19]={false};
int castlepos[10]={-1};
int dfs(int maxn,int maxm,int curn,int curm){
    if(curn==maxn&&curm==maxm){
        return 1;
    }
    int num=0;
    if(curn==maxn){
        for(int i=0;i<maxn+maxm;i++){
            if(!leftright[i]&&!leftup[maxn+maxm-curn-curm-1+i]&&!leftdown[curn+curm+i]){
                bool conflict= false;
                for(int j=0;j<curm+curn;j++){
                    if(castlepos[j]!=-1&&abs(castlepos[j]-i)==abs(curm+curn-j)){
                        conflict= true;
                        break;
                    }
                }
                if(!conflict){
                    leftright[i]=true;
                    leftup[maxn+maxm-curn-curm-1+i]=true;
                    leftdown[curn+curm+i]=true;
                    num+=dfs(maxn,maxm,curn,curm+1);
                    leftright[i]= false;
                    leftup[maxn+maxm-curn-curm-1+i]=false;
                    leftdown[curn+curm+i]=false;
                }
            }
        }
    }
    else if(curm==maxm){
        for(int i=0;i<maxn+maxm;i++){
            if(!leftright[i]&&!leftup[maxn+maxm-curn-curm-1+i]&&!leftdown[curn+curm+i]){
                leftright[i]=true;
                castlepos[curm+curn]=i;
                num+=dfs(maxn,maxm,curn+1,curm);
                castlepos[curm+curn]=-1;
                leftright[i]=false;
            }
        }
    }
    else{
        for(int i=0;i<maxn+maxm;i++){
            if(!leftright[i]&&!leftup[maxn+maxm-curn-curm-1+i]&&!leftdown[curn+curm+i]){
                bool conflict= false;
                for(int j=0;j<curm+curn;j++){
                    if(castlepos[j]!=-1&&abs(castlepos[j]-i)==abs(curm+curn-j)){
                        conflict= true;
                        break;
                    }
                }
                if(!conflict){
                    leftright[i]=true;
                    leftup[maxn+maxm-curn-curm-1+i]=true;
                    leftdown[curn+curm+i]=true;
                    num+=dfs(maxn,maxm,curn,curm+1);
                    leftright[i]= false;
                    leftup[maxn+maxm-curn-curm-1+i]=false;
                    leftdown[curn+curm+i]=false;
                }
            }
        }
        for(int i=0;i<maxn+maxm;i++){
            if(!leftright[i]&&!leftup[maxn+maxm-curn-curm-1+i]&&!leftdown[curn+curm+i]){
                leftright[i]=true;
                castlepos[curm+curn]=i;
                num+=dfs(maxn,maxm,curn+1,curm);
                castlepos[curm+curn]=-1;
                leftright[i]=false;
            }
        }
    }
    return num;
}
int main() {
    int m,n;
    while(cin >> m >> n){
        memset(castlepos,-1, sizeof (castlepos));
        cout << dfs(n,m,0,0) << endl;
    }
    return 0;
}