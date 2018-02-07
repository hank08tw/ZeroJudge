#include <iostream>
using namespace std;

int compare(int* data){//return 1 if there is confliction, return 0 when there is no confliction
    int time[9]={0};
    for(int i=0;i<9;i++){
        if(time[data[i]-1]==0){
            time[data[i]-1]++;
        }
        else{return 1;}
    }
    return 0;
}

int main() {
    int data[9][9],conflict=0,space;
    while(cin >> data[0][0] >> data[0][1] >> data[0][2] >> data[0][3] >> data[0][4] >> data[0][5] >> data[0][6] >> data[0][7] >> data[0][8]){
        for(int i=1;i<9;i++){
            for(int j=0;j<9;j++){
                cin >> data[i][j];
            }
        }
        for(int i=0;i<9;i++){
            int tmp[9];
            for(int j=0;j<9;j++){
                tmp[j]=data[i][j];
            }
            if(compare(tmp)==1){conflict=1;break;}
            for(int j=0;j<9;j++){
                tmp[j]=data[j][i];
            }
            if(compare(tmp)==1){conflict=1;break;}
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int tmp[9];
                int flag=0;
                for(int a=i*3;a<i*3+3;a++){
                    for(int b=j*3;b<j*3+3;b++){
                        tmp[flag]=data[a][b];
                        flag++;
                    }
                }
                if(compare(tmp)==1){conflict=1;break;}
            }
        }
        if(conflict==1){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
        conflict=0;
    }
    return 0;
}