#include <iostream>
using namespace std;
void tree(int,char*,int,int,int);
int main() {
    int length;
    cout << "please input the length of the array: ";
    cin >> length;
    char* data;
    data=new char[length*length];
    cout << "please input every line one by one (0 means white and 1 means black): " << endl;
    for(int i=0;i<length;i++){
        cin >> data+i*length;
    }

    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout << *(data+i*length+j);
        }
        cout << endl;
    }

    tree (length,data,1,1,length);
    cout << endl;
    return 0;
}

void tree(int len,char* data,int lrpos,int udpos,int originlen){
    int flag=0;
    if(len==1){
        if(*(data+originlen*(udpos-1)+lrpos-1)=='0'){
            cout << "w ";
        }
        else{cout << "b ";}
        flag=-1;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(*(data+(i+udpos-1)*originlen+(j+lrpos-1))!=(*(data+(udpos-1)*originlen+lrpos-1))){flag=1;}
        }
    }
    if(flag==0){
        if(*(data+originlen*(udpos-1)+lrpos-1)=='0'){
            cout << "w ";
        }
        else{cout << "b ";}
    }
    else if(flag==1){
        cout << "g ";
        tree (len/2,data,lrpos+len/2,udpos,originlen);
        tree (len/2,data,lrpos,udpos,originlen);
        tree (len/2,data,lrpos,udpos+len/2,originlen);
        tree (len/2,data,lrpos+len/2,udpos+len/2,originlen);
    }
}