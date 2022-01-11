#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,bool> m1;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        int key;
        for(int i=0;i<n;i++){
            if(m1[arr[i]]==false){
                m1[arr[i]]=true;
                
            }
            else{
                key=arr[i];break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=key){
            cout<<i+1<<endl;
            break;
        }
        }
        for(auto i:m1){
            i.first;
        }
        for(auto it=m1.begin();it!=m1.end();it++){

            it->first;
        }

    }
}