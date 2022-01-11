//Stack implementation using arrays
//Name:Adil Vinayak
//SID:20103034
//Branch:CSE
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int top;
    int size;//size of the array
    public:
        Stack(int n){
            size=n;
            top=-1;
        }
        int *arr=new int[size];//creating an array in heap memory.
        void push(int d){//push an element in the back of array(at next position of top)
            
            if(top>size-2){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                arr[top]=d;
                cout <<arr[top]<<" pushed into stack"<<endl;
                }
            return;
        }
        void pop(){//removing the last element of array
            if(top<0){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                cout<<arr[top]<<" gets popped"<<endl;
                top--;
            }
            return;
        }
        int top_element(){//returns top element of array
            if(top<0){
                cout<<"Stack Empty "<<endl;
                return -1;
            }
            return arr[top];
        }
        bool is_Empty(){//checks if array is empty
            if(top<0){
                return true;
            }
            else{
                return false;
            }
        }
        void display(){//displays the elements of the array
            if(top<0){
                cout<<"Stack is Empty "<<endl;
                return;
            }
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<' ';
            }
            cout<<endl;
            return;
        }
};
int main(){
    int n;
    cout<<"Enter size of Stack: ";
    cin>>n;
    Stack st(n);//Stack of size n
    for(int i=1;i<=n+2;i++){
        st.push(i);//pushing i in the stack
        cout<<"Stacks top element: "<<st.top_element()<<endl;
    }
    //Stack Overflow for last two elements
    cout<<"All elemeents of stack: ";
    st.display();//displays all elements of stack
    while(!st.is_Empty()) {
        
        st.pop();//removing current last element from the array
        if(!st.is_Empty()){
        cout<<"Stacks top element: "<<st.top_element()<<endl;
        }
        else{
            st.top_element();
        }
    }
    st.pop();//Stack Underflow
    st.display();//displays the elements of stack
}