#include <iostream>
#include <vector>
using namespace std;
bool compare(int num){
    int length=0,tmp=num,all=0;
    while(tmp>0){
        length++;
        tmp=tmp/10;
    }
    tmp=num;
    while(tmp>0){
        int tmp2=1;
        for(int i=0;i<length;i++){
            tmp2*=tmp%10;
        }
        all+=tmp2;
        tmp=tmp/10;
    }
    if(all==num){return true;}
    return false;
}
int main() {
    int n,m;
    vector<int> answer;
    for(int i=1;i<=1000000;i++){
        if(compare(i))answer.push_back (i);
    }
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&m);
        bool yesno=false;
        for(int i=0;i<answer.size ();i++){
            if(answer[i]<=m&&answer[i]>=n){
                if(!yesno)cout << answer[i];
                else{cout << " "<< answer[i];}
                yesno=true;
            }
        }
        if(!yesno)cout << "none";
        cout << endl;
    }
    return 0;
}