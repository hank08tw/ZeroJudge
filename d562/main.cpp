#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, tmp;
    while (scanf ("%d", &n) != EOF) {
        int front = 0, tail = n;
        vector<int> data;
        for (int i = 0; i < n; i++) {
            scanf ("%d", &tmp);
            data.push_back (tmp);
        }
        while (front != tail) {
            for (int i = front; i < tail; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
            front++;
            if(front==tail)break;
            for (int i = tail-1; i >= front; i--) {
                cout << data[i] << " ";
            }
            cout << endl;
            tail--;
        }
    }
    return 0;
}