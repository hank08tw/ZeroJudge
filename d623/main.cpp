#include <iostream>
#include <iomanip>
//?????為何一定要a,b,c,d都!=0否則tle???
using namespace std;
int main() {
    double a,b,c,d,tmp;
    while(cin >> a >> b >> c >> d&&a!=0&&b!=0&&c!=0&&d!=0){
        //scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        tmp=a*d-b*c;
        //if(a==b&&b==c&&c==d&&d==0)break;
        if(tmp==0){
            cout << "cheat!" << endl;
        }
        else{
            cout << fixed << setprecision(5) << d/tmp << " " << -b/tmp << endl;
            cout << fixed << setprecision(5) << -c/tmp << " " << a/tmp << endl;
        }
    }
    return 0;
}