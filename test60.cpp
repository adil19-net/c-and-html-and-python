#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    
        ll sum1=0;
        vector<ll> v1(n);
        for(ll i=0;i<n;i++){
            cin>>v1[i];
            sum1+=(v1[i]);
        }
        sort(v1.begin(),v1.end());
        ll m;
        cin>>m;
        for(ll i=0;i<m;i++){
            ll a,b,cnt=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
            cin>>a>>b;
            ll d=lower_bound(v1.begin(),v1.end(),a)-v1.begin();
            bool p=false;
            if(d==n){
                cnt+=(a-v1[n-1]);
                p=true;
            }
            if(b>sum1-v1[d]){
                if(!p){
                cnt2+=(b-sum1+v1[d]);}
                else{
                    cnt2+=(b-sum1+v1[n-1]+cnt);
                }
            }
            if(max(cnt,cnt2)==0  ){
                cout<<0<<endl;

            }
            else if(p){
                cout<<max(cnt,cnt2)<<endl;
            }
            else{
                cnt3=max(cnt,cnt2);
                
                cnt4+=(a-v1[d-1]);
                if(b>sum1-v1[d-1]){
                cnt5+=(b-sum1+v1[d-1]+cnt4);}
                cout<<min(cnt3,max(cnt5,cnt4))<<endl;
                
                

            }
            
        }
    
    
          

    
}