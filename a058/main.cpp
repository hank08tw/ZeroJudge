#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=0,c=0,tmp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        switch(tmp%3){
            case 0:
                a++;
                break;
            case 1:b++;
                break;
            case 2:c++;
                break;
        }
    }
    cout << a << " " << b << " " << c;
    return 0;
}