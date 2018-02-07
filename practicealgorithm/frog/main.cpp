#include <iostream>
#define NUM 7
using namespace std;
void go(char* data,int* num);
void swap(char* a,char* b);
int main() {
    char data[NUM]={'L','L','L',' ','R','R','R'};
    int num=1;
    while(data[0]!='R'||data[1]!='R'||data[2]!='R'||data[3]!=' '||data[4]!='L'||data[5]!='L'||data[6]!='L'){
        go(data,&num);
        //  if(num>=50){ break;}
    }
    cout << num << " : " << data << endl;
    return 0;
}
void go(char* data,int* num){
    int n;
    for(int i=0;i<NUM;i++){
        if(data[i]==' '){n=i;
            break;}
    }
    if(data[n+1]=='L'&&data[n+2]=='R'){
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n],data[n+2]);
    }
    else if(data[n-1]=='L'){
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n-1],data[n]);
    }
    else if(data[n-3]=='R'&&data[n-2]=='R'&&data[n-1]=='R'){
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n-1],data[n]);
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n-2],data[n-1]);
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n-3],data[n-2]);

    }
    else if(data[n+3]=='R'&&data[n+2]=='R'&&data[n+1]=='R'){
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n],data[n+1]);
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n+1],data[n+2]);
        cout << *num << " : " << data << endl;
        (*num)++;
        swap(data[n+2],data[n+3]);
    }
}
void swap(char* a,char* b){
    char tmp=*a;
    *a=*b;
    *b=tmp;
}