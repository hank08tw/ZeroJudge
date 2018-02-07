#include <iostream>
#include <vector>
//using namespace std;
/*
vector<int> a;
vector<int> b;
vector<int> c;
 */
/*
void print(char first,char second){
    cout << "ring ";
    switch(first){
        case 'a':cout << a.back ();
            if(second=='b'){
                b.push_back ((int)a.back ());
                a.pop_back ();
            }
            else{
                c.push_back ((int)a.back ());
                a.pop_back ();
            }
            break;
        case 'b':cout << b.back ();
            if(second=='a'){
                a.push_back ((int)b.back ());
                b.pop_back ();
            }
            else{
                c.push_back ((int)b.back ());
                b.pop_back ();
            }
            break;
        case 'c':cout << c.back ();
            if(second=='a'){
                a.push_back ((int)c.back ());
                c.pop_back ();
            }
            else{
                b.push_back ((int)c.back ());
                c.pop_back ();
            }
            break;
        default:
            return;
    }
    cout << " : " << first << " -> " << second << endl;
}
int whichchar(char ch){
    switch (ch){
        case 'a':return (int)a.size ();
        case 'b':return (int)b.size ();
        case 'c':return (int)c.size ();
        default:return -1;
    }
}
 */
void honai2(int n,char ca,char cb,char cc){
    if(n==1)cout << ca << "->" << cc << endl;
    else{
        honai2(n-1,ca,cc,cb);
        cout << ca << "->" << cc << endl;
        honai2(n-1,cb,ca,cc);
    }
}
 /*
void del(char ch){
    switch (ch){
        case 'a':a.clear ();
        case 'b':b.clear ();
        case 'c':c.clear ();
        default:return;
    }
}
*/
void honai(int n,char ca,char cb,char cc){
    if(n==2){
        //honai2(whichchar (cb),cb,ca,cc);
        cout << ca << "->" << cb << endl;
        //print(ca,cb);
        //del(cb);
        //honai2(whichchar (cc),cc,ca,cb);
        cout << ca << "->" << cc << endl;
        //print(ca,cc);
        //del(cc);
        return;
    }
    //honai2(whichchar (cb),cb,ca,cc);
    honai2(n-2,ca,cb,cc);
    //print(ca,cb);
    //del(cb);
    cout << ca << "->" << cb << endl;
    honai2(n-2,cc,ca,cb);
    cout << ca << "->" << cc << endl;
    //print(ca,cc);
    //del(cc);
    honai2(n-2,cb,cc,ca);
    honai(n-2,ca,cb,cc);
}

int main() {
    std::cout << "你的名字" << std::endl;
    int n;
    char ca='a',cb='b',cc='c';
    while(scanf("%d",&n)!=EOF){
        //a.clear ();
        //b.clear ();
        //c.clear ();
        //for(int i=n;i>=1;i--)a.push_back (i);
        honai(n,ca,cb,cc);
    }
    return 0;
}