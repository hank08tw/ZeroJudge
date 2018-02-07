#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    long A, B, C;
    while (scanf("%ld",&A)!=EOF) {
        scanf ("%ld %ld", &B, &C);
        if (A >= B && B >= C) {
            if (A >= B + C)cout << "A";
            else { cout << "B"; }
        } else if (A >= C && C >= B) {
            if (A >= B + C)cout << "A";
            else { cout << "C"; }
        } else if (B >= A && A >= C) {
            if (B >= A + C)cout << "B";
            else { cout << "A"; }
        } else if (B >= C && C >= A) {
            if (B >= A + C)cout << "B";
            else { cout << "C"; }
        } else if (C >= B && B >= A) {
            if (C >= B + A)cout << "C";
            else { cout << "B"; }
        } else if (C >= A && A >= B) {
            if (C >= B + A)cout << "C";
            else { cout << "A"; }
        }
        cout << endl;
    }
    return 0;
}
