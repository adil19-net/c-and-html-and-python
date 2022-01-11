//Binary Search Tree Implementation
//Name:Adil Vinayak
//SID:20103034
//Branch:CSE
#include<bits/stdc++.h>
using namespace std;

class Node{//A binary tree has nodes.
    public://These nodes have data,a pointer to the left and right child.
    int data;
    Node *left;
    Node *right;
    Node(int d){//constructor
        data=d;
        left=NULL;
        right=NULL;
    } 
};

class Queue{
    int front=-1,rear=-1;//front has index of first element of queue
    public://rear has index of last element of queue
        Node* arr[100];
        int size=100;
        void push(Node* d){//used for adding an element to the array(queue)
            if(rear==size-1){
                cout<<"The Queue is already full,so Queue overflow."<<endl;
            }
            else{
                arr[++rear]=d;
                if(front==-1){
                    front=0;
                }
            }
        }
        void pop(){//used to delete an element from the queue.
            if(front==-1){//arr is empty
                cout<<"The Queue is empty,so Queue underflow."<<endl;
            }
            else if(front==rear){//if front==rear then there is only 1 element in arr,so removing it.
                front=-1;
                rear=-1;
            }
            else{
                front++;// incrementing front and effectively deleting previous front
            }
        }
        bool isEmpty(){//checking whether arr is empty
            if(front==-1){
                return true;
            }
            return false;
        }
        Node* front_peek(){//returning arr[front]
            return arr[front];
        }
};

void BST_insert(Node *&root,int key){//inserting a node with data=key in a binary search tree
    if(!(root)){//passing root by reference as it may have to be changed in main() as well
        root=new Node(key);
        return;
    }
    if(root->data<key){//when key>data in root then insert in the right subtree corresponding to the root
        BST_insert(root->right,key);
    }
    else{//when key<data in root then insert in the left subtree corresponding to the root
        BST_insert(root->left,key);
    }
    return;
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
    if(key>root->data){//when key>data in root then we have to delete key in the right subtree corresponding to the root
        root->right=delete_node(root->right,key);
    }
    else if(key<root->data){//when key<data in root then we have to delete key in the left subtree corresponding to the root
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
    return root;
    
}

void inorder(Node *root){//inorder traversal of binary search tree
    if(root==NULL){
        return;
    }
    inorder(root->left);//calling left subtree corresponding to root
    cout<<root->data<<' ';
    inorder(root->right);//calling right subtree corresponding to root
}
void preorder(Node *root){//preorder traversal of binary search tree
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

void level_order_traverse(Node *root){//Breadth-first traversal or level order traversal of binary search tree
    if(root==NULL){
        return;
    }
    Queue q;//all nodes which are not NULL are stored in q such that left nodes are pushed in q first
    q.push(root);
    Node *temp;
    while(!q.isEmpty()){
        temp=q.front_peek();
        q.pop();
        cout<<temp->data<<' ';
        if(temp->left!=NULL){//pushing temp's left child in q when it is not NULL
            q.push(temp->left);
        }
        if(temp->right!=NULL){//pushing temp's right child in q when it is not NULL
            q.push(temp->right);
        }
    }
    return;
}
int main(){
    Node* root=NULL;
    BST_insert(root,8);
    BST_insert(root,3);
    BST_insert(root,10);
    BST_insert(root,1);
    BST_insert(root,6);
    BST_insert(root,14);
    BST_insert(root,4);
    BST_insert(root,7);
    BST_insert(root,13);BST_insert(root,15);

    cout<<"Inorder traversal of binary search tree: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal of binary search tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal of binary search tree: ";
    postorder(root);
    cout<<endl;
    cout<<"Level order traversal of binary search tree: ";
    level_order_traverse(root);
    cout<<endl;

    //root=delete_node(root,3);//delete node with data 3
    cout<<"3 is deleted from the tree."<<endl;
    cout<<endl;

    cout<<"Inorder traversal of binary search tree: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal of binary search tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal of binary search tree: ";
    postorder(root);
    cout<<endl;
    cout<<"Level order traversal of binary search tree: ";
    level_order_traverse(root);
    cout<<endl;

    //root=delete_node(root,0);//delete node with data 0
    cout<<"0 is deleted from the tree."<<endl;
    cout<<endl;

    cout<<"Inorder traversal of binary search tree: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal of binary search tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal of binary search tree: ";
    postorder(root);
    cout<<endl;
    cout<<"Level order traversal of binary search tree: ";
    level_order_traverse(root);
    cout<<endl;
}