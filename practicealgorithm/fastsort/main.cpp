#include <iostream>
using namespace std;
void quicksort(int* num,int left,int right);
int main() {
    int num[10]={6,9,3,2,1,10,33,22,3,2};
    quicksort(num,0,9);
    for(int i=0;i<=9;i++){
        cout << num[i] << " ";
    }
    return 0;
}
void quicksort(int* num,int left,int right){
    //if(left>=right){return;}
    int i=left,j=right,tmp;
    while(i!=j){
        while(num[j]>=num[left]&&i<j){j--;}
        while(num[i]<=num[left]&&i<j){i++;}
        tmp=num[i];
        num[i]=num[j];
        num[j]=tmp;
    }
    tmp=num[left];
    num[left]=num[i];
    num[i]=tmp;
    if(left<i-1){
        quicksort(num,left,i-1);
    }
    if(right>i+1) {
        quicksort(num, i + 1, right);
    }
}