#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,cnt=0;
        cin>>a>>b;
        c=(a*(a+1))/2;
        if(b>a*a){
            cout<<2*a-1<<endl;continue;
        }
        bool p=false;
        if(c<b){
            b-=c;
            cnt+=a;
            p=true;
        }
        ll ans=-1;
        ll l=1,h=a;
        if(p){
            h=a-1;
        }
        while(l<=h){
            ll m=(l+(h-l)/2);
            if(!p){
            if((m*(m+1))/2>=b){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }}
            else{
                if(((m*a)-(m*(m+1))/2)>=b){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
            }
        }
        if(ans==-1){
            ans=0;
        }
        cout<<ans+cnt<<endl;

    }    
}