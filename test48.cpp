#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int &a=x;
    cout<<a<<endl;
    a=10;
    cout<<x<<endl;
    x=15;
    cout<<&a<<endl;
}