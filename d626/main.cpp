#include <iostream>
#include <vector>
using namespace std;
char map[101][101];
struct point{
    int x,y;
};
int n;
void bfs(int y,int x){
    vector<point> data;
    data.clear ();
    point tmp;
    tmp.x=x;tmp.y=y;
    data.push_back (tmp);
    while(!data.empty ()){
        int size=(int)data.size ();
        for(int i=0;i<size;i++){
            map[data[i].y][data[i].x]='+';
            if(map[data[i].y][data[i].x+1]=='-'&&x+1<n){
                point tmp2;
                tmp2.x=data[i].x+1;tmp2.y=data[i].y;
                data.push_back (tmp2);
            }
            if(map[data[i].y-1][data[i].x]=='-'&&y-1>=0){
                point tmp2;
                tmp2.x=data[i].x;tmp2.y=data[i].y-1;
                data.push_back (tmp2);
            }
            if(map[data[i].y][data[i].x-1]=='-'&&x-1>=0){
                point tmp2;
                tmp2.x=data[i].x-1;tmp2.y=data[i].y;
                data.push_back (tmp2);
            }
            if(map[data[i].y+1][data[i].x]=='-'&&y+1<n){
                point tmp2;
                tmp2.x=data[i].x;tmp2.y=data[i].y+1;
                data.push_back (tmp2);
            }
        }
        data.erase(data.begin (),data.begin ()+size);
    }
};
int main() {
    int y,x;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            cin >> map[i];
        }
        cin >> y >> x;
        bfs(y,x);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                cout << map[i][j];
            }
            cout << endl;
        }
        /*
        for(int i=0;i<100;i++){
            for(int j=0;j<n;j++){
            }
        }
         */
    }
    return 0;
}