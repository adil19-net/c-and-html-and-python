#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void append(Node **head,int d){
        Node *new_node=new Node();
        new_node->data=d;
        Node *temp=*head;
        if(*head==NULL){
            *head=new_node;
            return; 
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=NULL;

    }
void after(Node *prev_node,int d){
    Node* new_node=new Node();
    new_node->data=d;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}    

void first(Node **head, int d){
   Node *new_node=new Node();
   new_node->data=d;
   new_node->next=*head;
   *head=new_node;

}
void print_list(Node *head){
    
    while(head!=NULL){
        cout<<head->data<<' ';
        head=head->next;
    }
    cout<<endl;

}
void delete_list(Node ** head,int d){
    Node *prev=*head;
    Node *temp=prev->next;
    while(temp!=NULL){
        free(prev);
        prev=temp;
        temp=temp->next;
        free(prev);
    }

}
void reverse(Node **head){
    Node *curr=*head;
    Node *prev=NULL;
    Node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;

}
void segregate_list(Node **head){
    Node *temp=*head;
    Node *temp2=*head;
    Node *prev=NULL;
    Node *tt=NULL;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    Node *last=temp2;
    bool p=false;
    while(temp!=last){
        tt=temp->next;
        if((temp->data)%2==0){

            if(prev!=NULL){
                prev->next=temp->next;
            }
            temp2->next=temp;
            temp->next=NULL;
            temp2=temp;
            temp=tt;
            
        }
        else{
            if(!p){
            p=true;
            *head=temp;
        }  
        prev=temp; temp=tt;
        }
        
    
    }
}
bool palin(Node * head,Node* right){
    if(right->next==NULL){
        if(right->data==head->data){
            
        }
        else return false;
    }
}


int main(){
    Node* head=NULL;
    append(&head,1);
    append(&head,2);
    append(&head,6);
    after(head->next,3);
    first(&head,4);
    print_list(head);
    reverse(&head);
    print_list(head);
    segregate_list(&head);
    print_list(head);
}