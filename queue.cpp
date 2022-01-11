//Simple Queue Implementation using arrays
//Name:Adil Vinayak
//SID:20103034
//Branch:CSE
//In class Queue, arr is an array which is being used to implement a queue
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int front=-1,rear=-1,size;//front has index of first element of queue
    public://rear has index of last element of queue
        Queue(int n){
            size=n;//using constructor for defining size
        }
        int *arr=new int[size];//creating an array with size-size.
        void Enqueue(int d){//used for adding an element to the array(queue)
            if(rear==size-1){//if rear equals the last index of arr 
                cout<<"The Queue is already full,so Queue overflow."<<endl;
            }
            else{
                arr[++rear]=d;//setting arr[++rear] equal to input value
                cout<<d<<" is added to the queue."<<endl;
                if(front==-1){// if front is -1 then arr is empty, so when adding an element defining front=0
                    front=0;
                }
            }
        }
        void DeQueue(){//used to delete an element from the queue.
            if(front==-1){//arr is empty
                cout<<"The Queue is empty,so Queue underflow."<<endl;
            }
            else if(front==rear){//if front==rear then there is only 1 element in arr,so removing it.
                cout<<arr[front]<<" is removed from the queue."<<endl;
                front=-1;
                rear=-1;//As arr is empty setiing front and rear as -1
            }
            else{
                cout<<arr[front]<<" is removed from the queue."<<endl;
                front++;// incrementing front and effectively deleting previous front
            }
        }
        void Display(){//printing all elements from front to rear if arr is not empty
            if(front==-1){
                cout<<"The Queue is empty."<<endl;
                return;
            }
            cout<<"Elements of the queue(simple) are: ";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<' ';
            }
            cout<<endl;
        }
        bool isEmpty(){//checking whether arr is empty
            if(front==-1){
                cout<<"The Queue is empty."<<endl;
                return true;
            }
            cout<<"The queue is not empty."<<endl;
            return false;
        }
        void front_peek(){//printing arr[front]
            if(front==-1){
                cout<<"The queue is empty."<<endl;
                return;}
            cout<<"The front element of the queue: "<<arr[front]<<endl;
        }
};
int main(){
    Queue Q1(5);
    Q1.DeQueue();

    Q1.Enqueue(1);
    Q1.Enqueue(2);
    Q1.Enqueue(3);
    Q1.Display();
    Q1.front_peek();
    Q1.isEmpty();
    //Q1={1,2,3}
    Q1.DeQueue();
    Q1.DeQueue();
    Q1.DeQueue();
    Q1.DeQueue();
    Q1.Display();
    Q1.isEmpty();
    //Q1={}
    Q1.Enqueue(1);
    Q1.Enqueue(2);
    Q1.Enqueue(3);
    Q1.Enqueue(4);
    Q1.Enqueue(5);
    Q1.Enqueue(6);
    Q1.Display();
    Q1.isEmpty();
    Q1.front_peek();
    //Q1={1,2,3,4,5}
}