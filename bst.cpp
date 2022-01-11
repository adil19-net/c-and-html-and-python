#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node * search(Node *root,int key){
    if(root==NULL || root->data==key){
        return root;
    }
    if(key>root->data){
        return search(root->right,key);
    }
    else{
        return root->left=search(root->left,key);
    }
    
}

void BST_insert(Node *&root,int key){
    if(!(root)){
        root=new Node(key);
        return;
    }
    if(root->data<key){
        BST_insert(root->right,key);
    }
    else{
        BST_insert(root->left,key);
    }

    return;
}

Node * delete_node(Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key>root->data){
        root->right=delete_node(root->right,key);
    }
    else if(key<root->data){
        root->left=delete_node(root->left,key);
    }
    else{
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left==NULL){
            
        }
    }
    
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
    Node* root=NULL;
    BST_insert(root,1);
    BST_insert(root,2);
    BST_insert(root,3);
    BST_insert(root,4);
    BST_insert(root,5);
    inorder(root);
}