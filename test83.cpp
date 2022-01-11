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
        for(int i=0;i<v1.size()-1;i++){
            v2.push_back(v1[i+1]-v1[i]);
        }
        min_e=*max_element(v2.begin(),v2.end());
        cout<<min_e<<endl;

    }
}