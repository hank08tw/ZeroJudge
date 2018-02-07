#include <iostream>
using namespace std;
int main() {
    int year;
    while(cin >> year) {
        if (year % 400 == 0) {
            cout << "閏年";
        } else if (year % 100 == 0 && year % 400 != 0) {
            cout << "平年";
        } else if (year % 4 == 0) {
            cout << "閏年";
        } else {
            cout << "平年";
        }
        cout << endl;
    }
    return 0;
}