#include <iostream>
using namespace std;
//valueof讓羅馬數字轉阿拉伯數字
int valueof(char s){
    switch(s){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:return -2147483647;
    }
}
//這題唯一就是觀察到前面大於等於後面就加起來就好 前面小於後面就減掉
int main() {
    //table讓阿拉伯數字轉羅馬數字
    string table1[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string table2[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string table3[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string table4[5]={"","M","MM","MMM","MMMM"};
    string a,b;
    int vala,valb;
    while(cin >> a){
        if(a=="#"){
            break;
        }
        cin >> b;
        vala=valueof(a[a.length ()-1]),valb=valueof(b[b.length ()-1]);
        int next=valueof(a[a.length()-1]);
        int cur=valueof(a[a.length()-2]);
        for(int i=(int)a.length()-2;i>=0;i--){
            if(cur<next){
                vala-=cur;
            }
            else{
                vala+=cur;
            }
            next=cur;
            if(i-1>=0){
                cur=valueof(a[i-1]);
            }
        }
        //cout << vala << endl;
        next=valueof(b[b.length()-1]);
        cur=valueof(b[b.length()-2]);
        for(int i=(int)b.length()-2;i>=0;i--){
            if(cur<next){
                valb-=cur;
            }
            else{
                valb+=cur;
            }
            next=cur;
            if(i-1>=0){
                cur=valueof(b[i-1]);
            }
        }
        //cout << valb << endl;
        int ans=abs (vala-valb);
        if(ans==0)cout<< "ZERO" << endl;
        else{
            string output="";
            output+=table4[ans/1000]+table3[(ans%1000)/100]+table2[(ans%100)/10]+table1[ans%10];
            cout << output << endl;
        }
    }
    return 0;
}