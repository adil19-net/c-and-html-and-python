//AVL Tree Implementation
//Name:Adil Vinayak
//SID:20103034
//Branch:CSE
#include<bits/stdc++.h>
using namespace std;

class Node{//Node of a tree
    public://These nodes have data,a pointer to the left and right child and their height.
        int data;
        Node *left;
        Node *right;
        int height;
        Node(int val){//Constructor for when a new new node is created
            data=val;
            left=NULL;
            right=NULL;
            height=1;//new node is inserted at leaf
        }
};

int max_func(int a,int b){//return max of two integers
    if(a>b){
        return a;
    }
    return b;
}

int height(Node *y){//returns the height of a node
    if(!y){
        return 0;
    }
    return y->height;
}

int balance_factor(Node *y){//returns the balance factor of a node
    return height(y->left)-height(y->right);
}

Node *right_rotate(Node *y){//carries out right rotation on subtree rooted with y
    Node *x=y->left;
    Node *z=x->right;

    x->right=y;//performing rotation
    y->left=z;//performing rotation
    
    y->height=1+max_func(height(y->left),height(y->right));//update height of y
    x->height=1+max_func(height(x->left),height(x->right));//update height of x
    return x;//new root
}

Node *left_rotate(Node *y){//carries out left rotation on subtree rooted with y
    Node *x=y->right;
    Node *z=x->left;

    x->left=y;//performing rotation
    y->right=z;//performing rotation
    
    y->height=1+max_func(height(y->left),height(y->right));//update height of y
    x->height=1+max_func(height(x->left),height(x->right));//update height of x
    return x;//new root
}
Node * search(Node *root,int key){//returns pointer to node with data=key
    if(root==NULL || root->data==key){//if root=NULL or the required node is found,return root
        return root;
    }
    if(key>root->data){//recursion in right subtree
        return search(root->right,key);
    }
    else{//recursion in left subtree
        return root->left=search(root->left,key);
    }   
}
Node *insert(Node *root,int val){
    if(!root){//root is NULL so create new node
        root=new Node(val);
        return root;
    }
    if(root->data>val){//recursion in left subtree
        root->left=insert(root->left,val);
    }
    else if(root->data<val){//recursion in right subtree
        root->right=insert(root->right,val);
    }
    else{//Equal keys not allowed
        return root;
    }//update heights of ancestors in recursion
    root->height = 1 + max_func(height(root->left), height(root->right));
    int balance = balance_factor(root);//balance factor or root

    if (balance > 1 && val < root->left->data)//left-left
        return right_rotate(root);
 
    else if (balance < -1 && val>root->right->data)//right-right
        return left_rotate(root);

    else if (balance > 1 && val > root->left->data)//left-right
    {
        root->left = left_rotate(root->left);
        return right_rotate(root);
    }
    else if (balance < -1 && val <root->right->data)//right-left
    {
        root->right = right_rotate(root->right);
        return left_rotate(root);
    }
    return root;
}

Node* min_val_node(Node *root)//returns a pointer to the node with least data value in the BST
{
    Node *temp=root;
    while (temp!=NULL && temp->left != NULL){
        temp=temp->left;
    }
    return temp;
}
Node * delete_node(Node *root,int key){//deletes the node with data=key
    if(root==NULL){
        return root;
    }
    if(key>root->data){//recursion in right subtree
        root->right=delete_node(root->right,key);
    }
    else if(key<root->data){//recursion in left subtree
        root->left=delete_node(root->left,key);
    }
    else{//when key=data in root
        if(root->left==NULL and root->right==NULL){//the root node is a leaf node
            delete root;
            return NULL;
        }
        else if(root->left==NULL){//root node has 1 child
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {//root node has 1 child
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp=min_val_node(root->right);//root has 2 children. Finding the next node corresponding to an inorder traversal
        root->data=temp->data;//equating data of root to data of temp
        root->right=delete_node(root->right,temp->data);//deleting temp
    }
    if (root == NULL)//if tree has one node
    return root;
    //updating height of ancestors in recursion
    root->height = 1 + max(height(root->left),height(root->right));
    int balance = balance_factor(root);//balance factor of node

    if (balance > 1 && balance_factor(root->left) >= 0)//left-left
        return right_rotate(root);
 
    if (balance > 1 && balance_factor(root->left) < 0){//left-right
        root->left = left_rotate(root->left);
        return right_rotate(root);
    }

    if (balance < -1 && balance_factor(root->right) <= 0)//right-right
        return left_rotate(root);

    if (balance < -1 && balance_factor(root->right) > 0)//right-left
    {
        root->right = right_rotate(root->right);
        return left_rotate(root);
    }
    return root;
    
}
void inorder(Node *root){//inorder traversal of AVL tree
    if(root==NULL){
        return;
    }
    inorder(root->left);//calling left subtree corresponding to root
    cout<<root->data<<' ';
    inorder(root->right);//calling right subtree corresponding to root
}
void preorder(Node *root){//preorder traversal of AVL tree
    if(root==NULL){
        return;
    }
    cout<<root->data<<' ';
    preorder(root->left);//calling left subtree corresponding to root
    preorder(root->right);//calling right subtree corresponding to root
}
void postorder(Node *root){//postorder traversal of binary search tree
    if(root==NULL){
        return;
    }
    postorder(root->left);//calling left subtree corresponding to root
    postorder(root->right);//calling right subtree corresponding to root
    cout<<root->data<<' ';
}

int main(){
    Node *root = NULL;
    root = insert(root, 40);
    root = insert(root, 20);
    root = insert(root, 60);
    root = insert(root, 45);
    root = insert(root, -10);
    root = insert(root, 70);
    if(search(root,20)==NULL){
        cout<<"20 is not present in the AVL Tree."<<endl;
    }
    else{
        cout<<"20 is present in the AVL Tree."<<endl;
    }

    cout<<"Inorder traversal of AVL Tree: ";
    inorder(root);
    cout<<'\n';
    cout<<"Preorder traversal of AVL Tree: ";
    preorder(root);
    cout<<'\n';
    cout<<"Postorder traversal of AVL Tree: ";
    postorder(root);
    cout<<'\n';

    root=delete_node(root,45);
    cout<<"45 is removed from the AVL Tree."<<'\n';

    cout<<"Inorder traversal of AVL Tree: ";
    inorder(root);
    cout<<'\n';
    cout<<"Preorder traversal of AVL Tree: ";
    preorder(root);
    cout<<'\n';
    cout<<"Postorder traversal of AVL Tree: ";
    postorder(root);
}