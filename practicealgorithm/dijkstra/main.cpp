#include <iostream>
#define NODE 6
#define SIDE 9
#define INF 99999999
using namespace std;
int main() {
    int map[NODE+1][NODE+1],smallest[NODE+1],a,b,c;
    bool inset[NODE+1];
    for(int i=1;i<=NODE;i++){
        for(int j=1;j<=NODE;j++){
            if(i==j){map[i][j]=0;}
            else{map[i][j]=INF;}
        }
    }
    for(int i=1;i<=SIDE;i++){
        cin >> a  >> b >> c;
        map[a][b]=c;
    }

    for(int i=1;i<=NODE;i++){
        smallest[i]=map[1][i];
    }

    for(int i=1;i<=NODE;i++){
        inset[i]=false;
    }
    inset[1]=true;

    for(int i=1;i<=NODE-1;i++){
        int min=INF;
        int node;
        for(int j=1;j<=NODE;j++){
            if(!inset[j]&&smallest[j]<min){
                min=smallest[j];
                node=j;
            }
        }
        inset[node]= true;
        for(int j=1;j<=NODE;j++){
            if(map[node][j]<INF){
                if(smallest[j]>smallest[node]+map[node][j]){
                    smallest[j]=smallest[node]+map[node][j];
                }
            }
        }
    };
    /*
    for(int i=1;i<=NODE;i++){
        for(int j=1;j<=NODE;j++){
            cout << map[i][j]<< " ";
        }
        cout << endl;
    }
     */
    for(int i=1;i<=NODE;i++){
        cout << smallest[i] << " ";
    }
}