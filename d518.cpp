#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <cstdio>
#include <unordered_map>
using namespace std;
int c;
struct node{
	int num;
	unordered_map <char,node*> m;
};
void travel(const string& s,int cur,node* thenode){
	if(cur==s.length()){
		if(thenode->num==-1){
			c++;
			thenode->num=c;
			printf("New! %d\n",c);
		}else{
			printf("Old! %d\n",thenode->num);
		}
	}else{
		if(thenode->m.find(s[cur])!=thenode->m.end()){
			travel(s,cur+1,thenode->m[s[cur]]);
		}else{
			thenode->m[s[cur]]=new node;
			thenode->m[s[cur]]->num=-1;
			travel(s,cur+1,thenode->m[s[cur]]);
		}
	}
}
void freenode(node* thenode){
	unordered_map <char,node*>::iterator it;
	for(it=thenode->m.begin();it!=thenode->m.end();it++){
		freenode(it->second);	
	}
	thenode->m.clear();
	delete thenode;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(scanf("%d",&n)!=EOF){
		c=0;
		node* first= new node;
		first->num=-1;
		string tmp;
		for(int i=0;i<n;i++){
			cin >> tmp;
			travel(tmp,0,first);
			tmp.clear();
		}
		freenode(first);
	}
	return 0;
}
