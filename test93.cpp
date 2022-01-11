#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_prime(ll a){
    if(a==1){
        return false;
    }
    if(a==2 || a==3){
        return true;
    }
    ll i=2;
    while(i*i<=a){
        if(a%i==0){
            return false;
        }
        i++;
    }
    return true;
    
}

int main(){
    bool prime[1000001];
    for(int i=1;i<=1000000;i++){
        if(is_prime(i)){
            prime[i]=true;
        }
        else{
            prime[i]=false;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n,e;
        cin>>n>>e;
        vector<ll> v1(n+1);
        for(int i=1;i<=n;i++){
            cin>>v1[i];
        }
        int i=1;
        int k=1;
        ll cnt=0;
        ll pro=v1[1];
        while(i+k*e<=n){
            if(i==n+1){
                break;
            }
            
            bool q=false;
            if(pro==1){
                q=true;
            }

            if(q && prime[v1[i+k*e]] || prime[pro]&& v1[i+k*e]==1){
                cnt++;
                pro*=v1[i+k*e];
                k++;
            }
            else if(v1[i+k*e]==1 && q){
                k++;
            }
            else{
                i++;
                k=1;
                pro=v1[i];
                continue;
            }

            if(i+k*e>n){
                i++;
                k=1;
                pro=v1[i];
            }
            
        }
        cout<<cnt<<endl;
    }
}