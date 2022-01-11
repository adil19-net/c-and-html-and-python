#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next=NULL;
};
void func(Node *pointer1){                 //Linked list
    while(pointer1!=NULL){
    cout<<pointer1->data<<" ";
    pointer1=pointer1->next;
}}
int main(){
    Node *head; // head is a pointer
    Node *second;
    Node *third;
    head=new Node();// head is pointing to an object in heap memory
    second=new Node();
    third=new Node();
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    func(head);

}