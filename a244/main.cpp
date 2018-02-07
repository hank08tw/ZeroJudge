#include <iostream>
using namespace std;
int main() {
    int N;
    long long a,b,c;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a >> b >> c;
        switch(a){
            case 1:cout <<b+c;break;
            case 2:cout <<b-c;break;
            case 3:cout <<b*c;break;
            case 4:cout <<b/c;break;
        }
        cout << endl;
    }
    return 0;
}