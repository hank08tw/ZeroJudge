#include <iostream>
#include <vector>
using namespace std;

struct _data{
    int exist;
    int thedata;
};
/*
int smallest(vector<_data>& data,int left,int right){
    int small=left;
    for(int i=left+1;i<=right;i++){
        if((data[i].thedata < data[small].thedata)&&data[i].exist==1){
            small=i;
        }
    }
    return small;
}
 */
int main() {
    int n,tmp,time=0,direction=1;//1代表向右,2代表向左
    vector<_data> data;
    int it=0;
    int delete_num=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        struct _data thetmp={1,tmp};
        data.push_back (thetmp);
    }
    int left=0,right=n-1;
    while(delete_num!=n-1){
        if(direction==1&&it==right){
            direction=2;
            time++;
        }
        else if(direction==2&&it==left){//剩最後一個的時候不用再轉頭 直接刪掉就好
            direction=1;
            time++;
        }

        if((data[it].thedata)==delete_num+1&&data[it].exist==1){
            data[it].exist=0;
            delete_num++;
            if(it==left){
                while(data[left].exist==0){
                    left++;
                    it++;
                }
            }
            else if(it==right){
                while(data[right].exist==0){
                    right--;
                    it--;
                }
            }
        }
        else if(direction==1){//東西沒被刪掉代表不可能只剩一個
            it++;
        }
        else if(direction==2){
            it--;
        }
    }
    cout << time;
    return 0;
}