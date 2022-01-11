#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt1=0,cnt2=0;
        cin>>n;
        ll arr[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        vector<ll> v1;
        sort(arr2,arr2+n);
        for(int i=0;i<n;i++){
            if(arr==arr2)break;
            for(int j=i;j<n;j++){
                if(arr[j]==arr2[i]){
                    if(i==j){
                        cnt1++;break;
                    }
                    if(i<j){
                    v1.push_back(i);
                    v1.push_back(j);
                    v1.push_back(j-i);

                    for(int u=0;u<j-i;u++){
                    int tem=arr[i];
                    for(int k=i;k<j;k++){
                        arr[k]=arr[k+1];
                    }
                    arr[j]=tem;
                        }
                    break;
                }
                    else{
                    v1.push_back(j);
                    v1.push_back(i);
                    v1.push_back(1);
                    int tem=arr[j];
                    for(int k=j;k<i;k++){
                        arr[k]=arr[k+1];
                    }
                    arr[i]=tem;
                    break;
                }
                    
                }
                
            }
            
        }
        
        cout<<n-cnt1<<endl;
        for(int i=0;i<v1.size();i+=3){
            cout<<v1[i]+1<<' '<<v1[i+1]+1<<' '<<v1[i+2]<<endl;}
        

    }}
