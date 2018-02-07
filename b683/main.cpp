#include <iostream>
#include <vector>
using namespace std;
char data[1000][1000];
void dfs(int i,int j,int& tmp,int& isring){
    tmp++;
    data[i][j]='*';
    if(data[i][j+1]=='*'&&data[i][j-1]=='*'&&data[i+1][j-1]=='*'&&data[i+1][j]=='#'){
        isring=1;
        return;
    }
    if(data[i+1][j]=='.'){
        dfs (i+1,j,tmp,isring);
    }
    if(data[i][j+1]=='.'){
        dfs (i,j+1,tmp,isring);
    }
    if(data[i-1][j]=='.'){
        dfs (i-1,j,tmp,isring);
    }
    if(data[i][j-1]=='.'){
        dfs (i,j-1,tmp,isring);
    }

}
int main() {
    int a,b;
    vector<int> length;
    vector<int> ::iterator it;
    cin >> a >> b;
    for(int i=0;i<a;i++){
        cin >> data[i];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(data[i][j]=='.') {
                int tmp = 0, isring = 0;//0 is not a ring,1 is a ring
                dfs (i, j, tmp, isring);
                if (isring == 1) {
                    length.push_back (tmp);
                }
            }
        }
    }
    long long int add=0;
    unsigned long long int mult=1;
    for(it=length.begin ();it!=length.end ();it++){
        add+=(*it);
        mult*=(*it);
    }
    cout << length.size () << " " << add << " " << mult;
    return 0;
}