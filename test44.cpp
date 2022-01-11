#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll arr[n],arr2[k];
    for(ll i=0;i<n;i++){
        cin>>arr[i];}
    for(ll i=0;i<k;i++){
        cin>>arr2[i];
        ll left=0,right=n-1;
        ll p=0;
        while(left<=right){
            ll mid=(left)+((right-left)/2);
            if(arr[mid]<=arr2[i]){
                p=mid+1;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<p<<endl;
        
    }    

}