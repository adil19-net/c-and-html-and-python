#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Stack{
    public:
    int max_value,size=0;
    Stack(int d){
        max_value=d;
    }
    int *arr=new int[max_value];
    void push(int num1){
        if(size==max_value){
            cout<<"Overflow"<<endl;
            return;
        }
        
            size++;
            arr[size]=num1;
        

    }
    void pop() {
        if(size==0) {
            cout<<"No element"<<endl;
            return;
        }

        size--;
    }
};
int main(){
    Stack s(2);
    s.push(4);
    s.push(3);
    s.push(6);
}