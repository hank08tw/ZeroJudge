#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;
//radix sort tle???
void radixsort(vector<int>& array){
    int max=array[0];
    //找到最大值
    for(int i=1;i<array.size ();i++){
        if(array[i]>max)max=array[i];
    }
    int tmp=1;
    int* ans=(int*)malloc (sizeof(int)*array.size());
    while(max/tmp>0){
        int bucket[10]={0};
        for(int i=0;i<array.size ();i++) {
            bucket[array[i] / tmp % 10]++;
        }
        for(int i=1;i<10;i++){
            bucket[i]+=bucket[i-1];
        }
        for(int i=array.size()-1;i>=0;i--){
            ans[--bucket[array[i]/tmp%10]]=array[i];
        }

        for(int i=0;i<array.size();i++){
            array[i]=ans[i];
        }
        tmp*=10;
    }
    free(ans);
}
//mergesort tle???
void mergesort(vector<int>& array){
    if(array.size ()==1)return;
    int mid=array.size ()/2;
    vector<int> left(array.begin (),array.begin ()+mid);
    vector<int> right(array.begin ()+mid,array.end ());
    mergesort (left);
    mergesort(right);
    int l=0,r=0;
    for(int i=0;i<array.size ();i++){
        if(r==right.size ()||(l<left.size ()&&left[l]<right[r])){
            array[i]=left[l++];
        }else{
            array[i]=right[r++];
        }
    }
}
int main() {
    int n,tmp;
    while(scanf("%d",&n)!=EOF){
        vector<int> array;
        for(int i=0;i<n;i++){
            scanf ("%d",&tmp);
            array.push_back (tmp);
            mergesort (array);
            //radixsort(array);
        }
        for(int i=0;i<n;i++){
            printf("%d ",array[i]);
        }
        printf("\n");
    }
}