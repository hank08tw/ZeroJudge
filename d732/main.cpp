#include <iostream>
#include <cstdlib>
using namespace std;
void search(int l,int r,int* array,int target){
    if(array[(l+r)/2]==target){
        cout << (l+r)/2 << endl;
        return;
    }
    if(l==r){
        cout << "0" << endl;
        return;
    }
    if(array[(l+r)/2]>target){
        if((l+r)/2-1<l){cout << "0" << endl;return;}
        search(l,(l+r)/2-1,array,target);
    }
    else{
        search((l+r)/2+1,r,array,target);

    }
}
int main() {
    int n,k,target;
    int array[100001];
    cin >> n >> k;
    const int num=n;
    for(int i=1;i<=num;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<k;i++){
        scanf("%d",&target);
        search(1,n,array,target);
    }

    return 0;
}