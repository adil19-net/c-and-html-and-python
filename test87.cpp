#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

void BFS(Node *root,int d){
    if(root==NULL){
        root=new Node(d);
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if((temp->left)==NULL){
            temp->left=new Node(d);
            return;
        }
        else{
            q.push(temp->left);
        }
        if((temp->right)==NULL){
            temp->right=new Node(d);
            return;
        }
        else{
            q.push(temp->right);
        }
    }
}
void Inorder(Node *root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<' ';
    Inorder(root->right);
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(11);
    root->right=new Node(9);
    root->left->left=new Node(7);
    root->right->left=new Node(15);
    root->right->right=new Node(8);
    Inorder(root);
    cout<<endl;
    BFS(root,12);
    
    Inorder(root);
    return 0;
}