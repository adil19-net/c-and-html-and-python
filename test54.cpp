#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back

class custom_stack_array {
    int arr[1000];
    int sz=0;
public:
    void push(int num) {
        if(sz==1000)
        {
            cout<<"Full";
            return;
        }
        arr[sz++]=num;
    }
    int top() {
        if(sz==0) {
            cout<<"stack empty"<<endl;
            return -1;
        }
        return arr[sz-1];
    }
    int size() {
        return sz;
    }
    bool empty() {
        return (sz==0);
    }
    void pop() {
        if(sz==0) {
            cout<<"stack empty"<<endl;
            return;
        }
        sz--;
    }
    void clear() {
        sz=0;
    }
};

int main() {
    custom_stack_array st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();
    st.push(56);

    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }
}