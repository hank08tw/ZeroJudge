#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int count=0;
struct node{
	int num;
	node* n[26];
};
void travel(const string& s,int cur,node* thenode){
	if(cur==s.length){
		if(thenode->num==-1){
			thenode.num=count;
			cout << "New! "<< count << endl;
		}else{
			cout << "Old! " << thenode.num << endl;
		}
	}else{
		if(thenode->n[s[cur]-97]!=nullptr){
			travel(s,cur+1,thenode->n[s[cur]-97]);
		}else{
			thenode->n[s[cur]-97]=new node;
			for(int i=0;i<26;i++)thenode->n[s[cur]-97]->n[i]=nullptr;
			thenode->n[s[cur]-97]->num=-1;
			travel(s,cur+1,thenode->n[s[cur]-97]);
		}
	}
}
int main(){
	while(cin >> n){
		count++;
		node first;
		first.num=-1;
		for(int i=0;i<26;i++)first.n[i]=nullptr;
		string tmp;
		cin >> tmp;
		travel(tmp,0,&first)
	}
}
