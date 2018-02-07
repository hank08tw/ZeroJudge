#include <iostream>
using namespace std;
int main() {
    int n,a,b,x=0,y=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        switch(a){
            case 0:
                y+=b;
                break;
            case 1:
                x+=b;
                break;
            case 2:y-=b;
                break;
            case 3:x-=b;
                break;
        }
    }
    cout << x << " " << y;
    return 0;
}