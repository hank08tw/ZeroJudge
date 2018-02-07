#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    char name[7];
    while(scanf("%s",name)!=EOF){
        for(int i=0;i<6;i++){
            cout << abs(name[i+1]-name[i]);
        }
        cout << endl;
    }
    /*
    char name[7];
    while(scanf("%c",&name[0])!=EOF){
        for(int i=1;i<7;i++){
            scanf("%c",&name[i]);
        }
        //setbuf(stdin, NULL);
        fflush (stdin);
        for(int i=0;i<6;i++){
            cout << abs(name[i+1]-name[i]) << " ";
        }
        cout << endl;
    }
    return 0;
     */
}