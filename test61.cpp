#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,m,d;
        cin>>a>>b>>c>>m;
        if(a+b+c-3<m){
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll> v1{a,b,c};
        sort(v1.begin(),v1.end());
        if(v1[2]-1>v1[0]+v1[1]){
            if(m>=v1[2]-1-v1[0]-v1[1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }

        
    }
    
          

    
}