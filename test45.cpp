#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s,pro;
        cin>>n>>s;
        pro=((n)*(n+1))/2;
        if(s>=pro){
            cout<<-1<<endl;
        }
        else{
            cout<<pro-s<<endl;
        }
    }

    
}