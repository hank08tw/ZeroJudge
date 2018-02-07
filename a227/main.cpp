#include <iostream>
#include <vector>
using namespace std;
vector<int> vec_a,vec_b,vec_c;
void print_back(char ch){
    switch (ch){
        case 'A':cout << vec_a.back ();
            break;
        case 'B':cout << vec_b.back ();
            break;
        case 'C':cout << vec_c.back ();
        default:
            break;
    }
}
void move(char fir,char sec){
    switch (fir){
        case 'A':
            if(sec=='B'){
                vec_b.push_back ((int)vec_a.back ());
                vec_a.pop_back ();
            }
            else{
                vec_c.push_back ((int)vec_a.back ());
                vec_a.pop_back ();
            }
            break;
        case 'B':
            if(sec=='A'){
                vec_a.push_back ((int)vec_b.back ());
                vec_b.pop_back ();
            }
            else{
                vec_c.push_back ((int)vec_b.back ());
                vec_b.pop_back ();
            }
            break;
        case 'C':
            if(sec=='A'){
                vec_a.push_back ((int)vec_c.back ());
                vec_c.pop_back ();
            }
            else{
                vec_b.push_back ((int)vec_c.back ());
                vec_c.pop_back ();
            }
            break;
    }
}
void honai(int n,char a,char b,char c){
    if(n==1){
        cout << "Move ring ";
        print_back (a);
        cout << " from " << a << " to " << c << endl;
        move(a,c);
        return;
    }
    honai(n-1,a,c,b);
    cout << "Move ring ";
    print_back (a);
    cout << " from " << a << " to " << c << endl;
    move(a,c);
    honai(n-1,b,a,c);


}
int main() {
    int n;
    char a='A',b='B',c='C';
    while(scanf("%d",&n)!=EOF){
        vec_a.clear ();
        vec_b.clear ();
        vec_c.clear ();
        for(int i=n;i>=1;i--)vec_a.push_back (i);
        honai(n,a,b,c);
        cout << endl;
    }
    return 0;
}