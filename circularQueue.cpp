//Circular Queue Implementation using arrays
//Name:Adil Vinayak
//SID:20103034
//Branch:CSE
//In class CircularQueue, arr is an array which is being used to implement a circular queue
#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    
    int front=-1,rear=-1,size;//front has index of first element of circular queue
    public://rear has index of last element of circular queue
        CircularQueue(int n){
            size=n;//using constructor for defining size
        }
        int *arr=new int[size];//creating an array with size-size.
        void Enqueue(int d){//used for adding an element to the circular queue
            if((front==0 && rear==size-1) || (rear+1==front)){//queue is full when the next element of arr[rear] is arr[front](since the queue is circular, next element of arr[size-1] is arr[0])  
                cout<<"The Queue is already full,so Queue overflow."<<endl;
            }
            else{if(front==-1){//if front is -1 then arr is empty, so when adding an element defining front=0
                    front=0;
                }
                if(rear==size-1){//if rear is equal to size-1, then define rear=-1 so that if queue is not full then next element can be added
                    rear=-1;
                }
                arr[++rear]=d;//setting to the new element in arr
                cout<<d<<" is added to the circular queue."<<endl;   
            }
        }
        void DeQueue(){//used to delete an element from the circular queue.
            if(front==-1){//arr is empty
                cout<<"The Queue is empty,so Queue undeflow."<<endl;
            }
            else if(front==rear){//if front==rear then there is only 1 element in arr,so removing it.
                cout<<arr[front]<<" is removed from the circular queue."<<endl;
                front=-1;
                rear=-1;//As arr is empty setiing front and rear as -1
            }
            else{
                cout<<arr[front]<<" is removed from the circular queue."<<endl;
                if(front==size-1){//if front reaches end of arr then starting it from -1 once again
                    front=-1;
                }
                front++;// incrementing front and effectively deleting previous front element
            }
        }
        void Display(){//printing all elements from front to rear if arr is not empty
            if(front==-1){//arr is empty
                cout<<"The Circular Queue is empty."<<endl;
                return;
            }
            cout<<"Elements of the cicular queue are: ";
            if(rear>=front){
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<' ';
            }
            cout<<endl;}
            else{//if front is greater than rear then printing from front to end of arr and from start to rear
                for(int i=front;i<size;i++){
                    cout<<arr[i]<<' ';
                }
                for(int i=0;i<=rear;i++){
                    cout<<arr[i]<<' ';
                }
                cout<<endl;
            }
        }
        bool isEmpty(){//checking whether queue is empty
            if(front==-1){
                cout<<"The Circular Queue is empty."<<endl;
                return true;
            }
            cout<<"The Circular queue is not empty."<<endl;
            return false;
        }
        void front_peek(){//printing arr[front]
            if(front==-1){
                cout<<"The circular queue is empty."<<endl;
                return;}
            cout<<"The front element of the circular queue: "<<arr[front]<<endl;
        }
};
int main(){
    CircularQueue Q1(5);
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
    Q1.DeQueue();
    Q1.DeQueue();
    Q1.Enqueue(7);
    Q1.Enqueue(8);
    Q1.Enqueue(9);
    Q1.isEmpty();
    Q1.front_peek();
    Q1.Display();
    //Q1={7,8,3,4,5}
}