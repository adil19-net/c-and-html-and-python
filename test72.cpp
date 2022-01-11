#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int> m1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m1[arr[i]]=i;
        }
        sort(arr,arr+n,greater<int>());
        vector<int> v1,v2;
        int cnt=0;
        for(int i=0;i<n;i+=1){
        for(int j=0;j<n;j+=1){
            if(i==j || m1[arr[i]]==m1[arr[j]])continue;
            cnt+=min(arr[i],arr[j]);
            
            if(arr[i]!=0){
            v1.push_back(m1[arr[i]]);}
            if(arr[j]!=0){
            v1.push_back(m1[arr[j]]);
            }
            v2.push_back(min(arr[i],arr[j]));
            arr[i]-=min(arr[i],arr[j]);
            arr[j]-=min(arr[i],arr[j]);
            

        }}
        cout<<cnt<<endl;
        for(int i=0;i<v1.size();i+=2){
            for(int j=0;j<v2[i];j++){
            cout<<v1[i]+1<<' '<<v1[i+1]+1<<endl;
        }}
        

    }
}