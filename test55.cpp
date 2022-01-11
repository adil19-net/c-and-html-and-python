#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t;
    while(t--){
        ll p,q,i=2,j=0;
        cin>>p>>q;
        if(p%q!=0){
            cout<<p<<endl;continue;
        }
        bool n=false;
        vector<ll> v1;
        while(i*i<=p){
            if(p%i==0){
                j=p/i;
                n=true;
                v1.push_back(i);
                v1.push_back(j);
            }
            i++;
        }
        if(!n){
            cout<<1<<endl;
            continue;
        }
        bool m=false;
        sort(v1.begin(),v1.end(),greater<ll>());
        for(ll k=0;k<v1.size();k++){
            
            if(v1[k]%q!=0){
                cout<<v1[k]<<endl;
                m=true;
                break;

            }
        }
        if(!m)cout<<1<<endl;

        


        }
        


    }

