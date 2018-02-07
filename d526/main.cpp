#include <iostream>
using namespace std;
struct node{
    int val;
    node* left;
    node* right;
};
void preorder(node* thenode){
    cout << thenode->val << " ";
    if(thenode->left!= nullptr)preorder (thenode->left);
    if(thenode->right!=nullptr)preorder(thenode->right);
}
/*
void inorder(node* thenode){
    if(thenode->left!= nullptr)preorder (thenode->left);
    cout << thenode->val << " ";
    if(thenode->right!=nullptr)preorder(thenode->right);
}
void lastorder(node* thenode){
    if(thenode->left!= nullptr)preorder (thenode->left);
    if(thenode->right!=nullptr)preorder(thenode->right);
    cout << thenode->val << " ";
}
 */
int main() {
    int n,tmp;
    while(scanf("%d",&n)!=EOF){
        node* head=new node;
        head->left=nullptr;
        head->right= nullptr;
        scanf("%d",&tmp);
        head->val=tmp;
        for(int i=1;i<n;i++){
            scanf("%d",&tmp);
            node* newnode=new node;
            newnode->left= nullptr;
            newnode->right= nullptr;
            newnode->val=tmp;
            node* tmp2=head;
            while(true){
                if(tmp2->val>tmp){
                    if(tmp2->left!=nullptr){
                        tmp2=tmp2->left;
                    }
                    else{
                        tmp2->left=newnode;
                        break;
                    }
                }
                else if(tmp2->val<tmp){
                    if(tmp2->right!=nullptr){
                        tmp2=tmp2->right;
                    }
                    else{
                        tmp2->right=newnode;
                        break;
                    }
                }
            }
        }
        preorder(head);
        cout << endl;
    }
    return 0;
}