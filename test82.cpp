#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end());

        ll min_e=v1[0];
        vector<ll> v2;
        v2.push_back(min_e);
        while(v1.size()>1){
            
            bool p=false;
            int key;
            for(ll i=0;i<v1.size();i++){
                if(v1[i]==min_e && p==false){
                    key=i;
                    p=true;
                }
                v1[i]-=min_e;
                
            }
            v1.erase(v1.begin()+key);
            min_e=v1[0];
            v2.push_back(min_e);
            if(v2[v2.size()-1]<v2[v2.size()-2] && (min_e>0)){
                break;
            }
        }
        min_e=*max_element(v2.begin(),v2.end());
        cout<<min_e<<endl;

    }
}