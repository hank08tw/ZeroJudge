#include <iostream>
using namespace std;
int main() {
    int x1,y1,x2,y2;
    while(true){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(x1==0&&x2==0&&y1==0&&y2==0){
            break;
        }
        else if(x1==x2&&y1==y2){
            cout << "0" << endl;
        }
        else if((abs(x1-x2)==abs(y1-y2))||(x1==x2)||(y1==y2)){
            cout << "1" << endl;
        } else cout << "2" << endl;
    }
    return 0;
}