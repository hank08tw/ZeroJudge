#include <iostream>
#define NUM 5
using namespace std;
void counting_sort(int* array,int* answer){
    int count[100]={0};
    for(int i=0;i<NUM;i++){
        count[array[i]]++;
    }
    for(int i=1,k=0;i<100;i++){
        for(int j=1;j<=count[i];j++){
            answer[k]=i;
            k++;
        }
    }
}
int main() {
    int array[NUM]={88,30,12,12,44};
    int answer[NUM]={0};
    counting_sort (array,answer);
    for(int i=0;i<NUM;i++){
        cout << answer[i] << " ";
    }
    return 0;
}