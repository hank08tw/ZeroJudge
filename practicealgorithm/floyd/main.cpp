#include <iostream>
using namespace std;
#define NODE 4
#define SIDE 8
#define INF 99999999
int main() {
    int map[NODE+1][NODE+1],a,b,c;
    for(int i=1;i<=NODE;i++){
        for(int j=1;j<=NODE;j++){
            if(i==j){map[i][j]=0;}
            else{map[i][j]=INF;}
        }
    }
    for(int i=1;i<=SIDE;i++){
        cin >> a >> b >> c;
        map[a][b]=c;
    }
    for(int n=1;n<=NODE;n++){
        for(int i=1;i<=NODE;i++){
            for(int j=1;j<=NODE;j++){
                if(map[i][j]>map[n][j]+map[i][n]){
                    map[i][j]=map[n][j]+map[i][n];
                }
            }
        }
    }
    for(int i=1;i<=NODE;i++){
        for(int j=1;j<=NODE;j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}