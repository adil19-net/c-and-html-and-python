#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int n;
    cin>>n;
    vector<int> v1(n);
    for(auto &a:v1){
        cin>>a;
    }
    int sum=0;
    for(auto &a:v1){
        if(a==1)a++;
        a=a-1;
        sum=sum+a;
    }
    cout<<sum<<endl;*/
    int n;
    cin>>n;
    vector<int> v1(n);
    for(auto &a:v1){
        cin>>a;
    }
    int a=int(find(v1.begin(),v1.end(),*max_element(v1.begin(),v1.end()))-v1.begin());
    int b=int(find(v1.begin(),v1.end(),*min_element(v1.begin(),v1.end()))-v1.begin());
    cout<<a<<"\n";
    cout<<b;
}