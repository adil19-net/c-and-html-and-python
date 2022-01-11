#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node *right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

void Find_bottom_right_node(Node *root,Node *bot){
    if(root==bot){
        
    }
}

Node* find_key_node(Node *root,int key){
    if(!root){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        if(root->data==key){
            return NULL;
        }
        return root;
    }
    queue<Node *> q;
    q.push(root);
    Node *temp=root;
    Node *key_node=NULL;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->data==key){
            key_node=temp;
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    if(key_node){
        int x=temp->data;
        key_node->data=x;
        Find_bottom_right_node(root,temp);
    }
    return root;


}

void inorder(Node *temp){
    if(!temp){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<' ';
    inorder(temp->right);
}

int main(){

}