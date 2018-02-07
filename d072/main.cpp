#include <iostream>
using namespace std;
int main() {
    int yr,n;
    int i=1;
    cin >> n;
    for(int a=0;a<n;a++){
        scanf("%d",&yr);
        if((yr%4==0&&yr%100!=0)||(yr%400==0))cout << "Case " << i << ": a leap year" << endl;
        else cout << "Case " << i << ": a normal year" << endl;
        i++;
    }
    return 0;
}