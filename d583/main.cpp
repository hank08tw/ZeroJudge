#include <iostream>
#include <vector>
using namespace std;
void mergesort(vector<int>& data){
    if(data.size ()==1)return;
    vector<int> left(data.begin (),data.begin ()+(data.size ()/2));
    vector<int> right(data.begin ()+(data.size ()/2),data.end());
    mergesort (left);
    mergesort (right);

    for(int i=0,l=0,r=0;i<data.size ();i++){
        if((left[l]<=right[r]&&l<left.size ()&&r<right.size ())||(r==right.size ())){
            data[i]=left[l++];
        }
        else{
            data[i]=right[r++];
        }
    }
}
int main() {
    int n,tmp;
    while(scanf("%d",&n)!=EOF){
        vector<int> data;
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            data.push_back (tmp);
        }
        mergesort(data);
        for(int i=0;i<n;i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
    return 0;
}