#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,f,cnt=0,sum=0;
    cin>>n>>f;
    ll arr[n],arr2[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i]>>arr2[i];
        sum+=(min(arr[i],arr2[i]));
    }
    vector<ll> v1;
    for(ll i=0;i<n;i++){
        if(arr[i]<arr2[i]){
            if(2*arr[i]<arr2[i]){
                v1.push_back(arr[i]);
            }
            else{
                v1.push_back(arr2[i]-arr[i]);
            }
        }
        else{
            v1.push_back(0);
        }
    }
    sort(v1.begin(),v1.end(),greater<ll>());
    for(ll i=0;i<f;i++){
        cnt+=(v1[i]);
    }
    cout<<cnt+sum;
    

}