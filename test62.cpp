#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> m1;
    int max1;
    bool p=false;
    for(int i=0;i<n;i++){
        int k;
        cin>>arr[i]>>k;
        m1[arr[i]]=k;
    }
    sort(arr,arr+n);
    max1=m1[arr[0]];
    for(int i=0;i<n;i++){
        if(m1[arr[i]]>=max1){
            max1=m1[arr[i]];
        }
        else{
            p=true;break;
        }
    }
    
    
    
        
    
    if(p){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
}   