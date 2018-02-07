#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int prime(int test){
    int isprime=1;
    for(int i=2;i<test;i++){
        if(test%i==0){
            isprime=0;
            break;
        }
    }
    return isprime;
}
int main() {
    int num;
    while(cin >> num){
        vector<int> data;
        vector<int> ::iterator it;
        while(prime(num)==false){
            for(int i=2;i<num;i++){
                if(num%i==0&&prime(i)==1){
                    data.push_back (i);
                    num/=i;
                    break;
                }
            }
        }
        data.push_back (num);

        sort(data.begin (),data.end ());

        int n=0;
        for(it=data.begin ();it!=data.end ();it++){
            if((it+1)!=data.end ()&&*(it+1)==*it){
                n++;
            }
            else if(it+1==data.end ()&&n==0){
                cout << (*it);

            }
            else if(it+1==data.end ()&&n>0){
                cout << (*it) << "^" << n+1;
            }
            else if(n>0&&*(it+1)!=*it){
                cout << (*it) << "^" << n+1 << " * ";
                n=0;
            }
            else{
                cout << (*it) << " * ";
            }
        }
        cout << endl;
    }
    return 0;
}