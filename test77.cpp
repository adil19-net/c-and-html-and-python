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
        bool p;
        while(v1.size()!=1){
            p=false;
        for(int i=v1.size()-1;i>=1;i--){
            if((v1[i]%(i+1))!=0){
                auto it=v1.begin()+i;
                v1.erase(it);
                p=true;
                break;
            }
        }if(!p){
            break;
        }
        }
        if(v1.size()==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}