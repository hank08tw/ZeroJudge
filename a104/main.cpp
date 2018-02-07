#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void mergesort(vector<int>& data){
    if(data.size ()==1)return;
    int mid=int(data.size ())/2;
    vector<int> left(data.begin (),data.begin ()+mid);
    vector<int> right(data.begin ()+mid,data.end ());
    mergesort(left);
    mergesort(right);
    for(int i=0,l=0,r=0;i<data.size ();i++){
        if((l<left.size ()&&r<right.size ()&&left[l]<=right[r])||r==right.size ()){
            (data)[i]=left[l++];
        }
        else{
            (data)[i]=right[r++];
        }
    }
}
int main() {
    int n,tmp;
    while(scanf ("%d",&n)!=EOF){
        vector<int> data;
        for(int i=0;i<n;i++){
            scanf ("%d",&tmp);
            data.push_back (tmp);
        }
        mergesort (data);
        for(int i=0;i<data.size ();i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
    return 0;
}