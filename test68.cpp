#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==1 && a!=1){
            cout<<"NO"<<endl;
            continue;
        }
        if(a%2!=b%2){
            cout<<"NO"<<endl;
            continue;
        }
        ll cnt1=1,cnt2=b,cnt3=b%a;
        bool p=false;
        while(cnt1<=100){
            if(cnt3==0){
                cout<<"YES"<<endl;
                p=true;break;
            }
            cnt1++;
            cnt3=(cnt3*b)%a;
            

            
            cnt1++;
        }
        if(!p){
            cout<<"NO"<<endl;
        }
        
    }
}