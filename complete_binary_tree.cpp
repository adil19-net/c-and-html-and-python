//Complete Binary Tree Implementation
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

void Insert_node(Node *&root, int key){//Insertion of node in binary tree such that it is complete
    if(root==NULL){//passing root by refernce as it may have to be changed in main when called
        root=new Node(key);
        return;
    }
    Queue q;//using a queue for level order traversal to find the node where the insertion will occur.
    q.push(root);
    Node *temp;//first the left nodes are filled before the right ones at same level
    while(!q.isEmpty()){
        temp=q.front_peek();
        q.pop();
        if(temp->left==NULL){//when left child of temp is NULL insertion will take place here
            temp->left=new Node(key);//pushing temp's left child in q when it is not NULL
            return;
        }
        else{
            q.push(root->left);
        }
        if(temp->right==NULL){//when right child of temp is NULL insertion will take place here
            temp->right=new Node(key);//pushing temp's right child in q when it is not NULL
            return;
        }
        else{
            q.push(root->right);
        }
    }
}
void delete_last(Node*root,Node *last_node){//deleting bottom-most and right-most node
    Queue q;
    q.push(root);
    Node *temp;
    while(!q.isEmpty()){//finding the node whose child is the last_node
        temp=q.front_peek();
        q.pop();
        if(temp->right==last_node){//temp's right child is the last_node
            temp->right=NULL;
            delete last_node;//freeing memory of last_node
            return;
        }
        else if(temp->right!=NULL){
            q.push(temp->right);//pushing temp's right child in q when it is not NULL and not the last_node
        }
        if(temp->left==last_node){//temp's last node is the last_node
            temp->left=NULL;
            delete last_node;//freeing memory of last_node
            return;
        }
        else if(temp->left!=NULL){
            q.push(temp->left);//pushing temp's left child in q when it is not NULL and not the last_node
        }
    }

}

void delete_node(Node *&root,int key){//deleting node with data=key
    if(root==NULL){//passing root by reference as root may have to be changed as the function is called in main
        return;
    }
    if(root->left==NULL && root->right==NULL){//when root is a leaf node
        delete root;//free memory of the object to which root points
        root=NULL;
        return;
    }
    Queue q;
    q.push(root);
    Node *temp;//temp will be used for traversing through the tree and its final value will be the 
    Node *key_node=NULL;//key_node is the node for which data=key
    while(!q.isEmpty()){
        temp=q.front_peek();
        q.pop();
        if(temp->data==key){//key_node is found
            key_node=temp;
        }//pushing all nodes which are not NULL in q
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }    
    }
    if(key_node!=NULL){//if tree has a node with value key
            int x=temp->data;//x=data of bottom-most and right-most node
            delete_last(root,temp);//for deleting bottom-most and right-most node
            key_node->data=x;//equating data of key_node to x
        }
    return;

}

void inorder(Node *root){//inorder traversal of binary tree
    if(root==NULL){
        return;
    }
    inorder(root->left);//calling left subtree corresponding to root
    cout<<root->data<<' ';
    inorder(root->right);//calling right subtree corresponding to root
}
void preorder(Node *root){//preorder traversal of binary tree
    if(root==NULL){
        return;
    }
    cout<<root->data<<' ';
    preorder(root->left);//calling left subtree corresponding to root
    preorder(root->right);//calling right subtree corresponding to root
}

void postorder(Node *root){//postorder traversal of binary tree
    if(root==NULL){
        return;
    }
    postorder(root->left);//calling left subtree corresponding to root
    postorder(root->right);//calling right subtree corresponding to root
    cout<<root->data<<' ';
}

void level_order_traverse(Node *root){//Breadth-first traversal or level order traversal of binary tree
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
    Node *root=NULL;
    Insert_node(root,1);
    Insert_node(root,10);
    Insert_node(root,6);
    Insert_node(root,7);
    Insert_node(root,4);
    Insert_node(root,15);

    cout<<"Inorder traversal of binary tree: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal of binary tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal of binary tree: ";
    postorder(root);
    cout<<endl;
    cout<<"Level order traversal of binary tree: ";
    level_order_traverse(root);
    cout<<endl;

    delete_node(root,7);//deleting node with data 7
    cout<<"7 is deleted from the tree."<<endl;
    cout<<endl;

    cout<<"Inorder traversal of binary tree: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal of binary tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal of binary tree: ";
    postorder(root);
    cout<<endl;
    cout<<"Level order traversal of binary tree: ";
    level_order_traverse(root);
    cout<<endl;

    delete_node(root,1);//deleting node with data 1
    cout<<"1 is deleted from the tree."<<endl;
    cout<<endl;

    cout<<"Inorder traversal of binary tree: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal of binary tree: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal of binary tree: ";
    postorder(root);
    cout<<endl;
    cout<<"Level order traversal of binary tree: ";
    level_order_traverse(root);
    cout<<endl;

}