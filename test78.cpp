#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<ll> v1(n+1);
    for(int i=1;i<=n;i++){
        cin>>v1[i];
    }
    ll cnt=0;
    for(int i=1;i<=n;i++){
        v1[i]-=cnt;
        if(v1[i]>i){
            cnt+=(v1[i]-i);
        }
    }
    cout<<cnt<<endl;
    }
}