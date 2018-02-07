#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int data[3];
    for(int i=0;i<n;i++){
        cin >> data[0] >> data[1] >> data[2] >> data[3];
        cout << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << " ";
        if(data[3]-data[2]==data[2]-data[1]&&data[2]-data[1]==data[1]-data[0]){
            cout << data[3]*2-data[2];
        }
        else{//if(data[3]/data[2]==data[2]/data[1]&&data[2]/data[1]==data[1]/data[0])
            cout << data[3]*data[3]/data[2];
        }
        cout << endl;
    }
    return 0;
}