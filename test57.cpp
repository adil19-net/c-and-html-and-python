#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    
    map<ll,ll> m1;
vector<ll> v1;
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            m1[arr[i]]++;
        }
        ll i=1;
        while(i<=10000){
            if(m1[i]==0){
            v1.push_back(i);
            }
            i++;
        }
        /*for(ll j=0;j<v1.size();j++){
            cout<<v1[i]<<endl;
        }*/
        
        
      
        for(ll j=0;j<q;j++){
            ll a;
            cin>>a;
            cout<<v1[a-1]<<endl;
            
        }
        
    
    

}
