//Infix to Postfix Expression Conversion using stacks
//Name:Adiol Vinayak
//SID:20103034
//Branch:CSE
#include<bits/stdc++.h>
using namespace std;
#define size 1000 //size of the stack
class Stack{
    int top;
    public:
        Stack(){
            top=-1;
        }
        char arr[size];
        void push(int d){//push an element in the back of array(at next position of top)
            
            if(top>size-2){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                arr[top]=d;
                }
            return;
        }
        void pop(){//removing the last element of array
            if(top<0){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                top--;
            }
            return;
        }
        int top_element(){//returns current top element of array
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
        
};
int prec(char ch){//defining precedence of different operators
    if(ch=='+' || ch=='-'){
        return 1;          //setting precedence of + and - as 1
    }
    else if(ch=='*' || ch=='/'){
        return 2;          //setting precedence of * and / as 2
    }
    else if(ch=='^'){
        return 3;          //setting precedence of ^ as 3 
    }
    else{
        return 0;
    }
}

string infix_to_postfix_conversion(string s){
    string ans="";
    Stack s1;//object s1
    s1.push('!');
    char ch;
    for(int i=0;i<s.length();i++){
        ch=s[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){//identifying operands
            ans+=ch;
        }
        else if(ch=='('){//identifying '(' and pushing it in stack
            s1.push('(');
        }
        else if(ch==')'){//identifying ')'
            while(s1.top_element()!='!' && s1.top_element()!='('){
                ans+=s1.top_element();
                s1.pop();//finding '(' and popping it
            }
            s1.pop();
            
        }
        else{//for operators finding the operator whose precedence is lesser than precedence of ch
            if(prec(ch)>s1.top_element()){
                s1.push(ch);
            }
            else{
                while(s1.top_element()!='!' && prec(ch)<=prec(s1.top_element())){
                    ans+=(s1.top_element());
                    s1.pop();
                }
                s1.push(ch);//after locating that operator push ch
            }
        }
    }
    while(s1.top_element()!='!'){//entering all valid left operators of s1 in ans
        ans+=s1.top_element();
        s1.pop();
    }
    return ans;
}
int main(){
    string s;
    cin>>s;//taking infix expression as input
    cout<<infix_to_postfix_conversion(s)<<"\n";
    return 0;
}
