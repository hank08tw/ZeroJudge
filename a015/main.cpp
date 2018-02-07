#include <iostream>
#define MAX(a,b) a>=b ? a:b;
#define SWAP(a,b,tmp) tmp=a,a=b;b=tmp;
using namespace std;

int main() {
    int data[100][100];
    int a,b;
    while(cin >> a >> b) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> data[i][j];
            }
        }
        int max = MAX(a, b);
        for (int i = 0; i < max; i++) {
            for (int j = i; j < max; j++) {
                if (i != j) {
                    int tmp;
                    SWAP(data[i][j], data[j][i], tmp);
                }
            }
        }
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                cout << data[i][j];
                if (j != a - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}