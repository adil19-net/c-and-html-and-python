#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
       int a;
       cin>>a;
       int arr[a];
       for(int i=0;i<a;i++){
           cin>>arr[i];
       }
       vector<int> v1;
       vector<int> v2(101,1);
       sort(arr,arr+a);
       for(int i=0;i<a;i++){
           if(v2[arr[i]]==1){
               v2[arr[i]]=0;
               cout<<arr[i]<<' ';
           }
           else{
               v1.push_back(arr[i]);
           }
       }
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<' ';
        }
        cout<<endl;
       
        
    }
}