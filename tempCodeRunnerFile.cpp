#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,cnt=0,r,s;
        cin>>a>>b;
        r=a%3;
        s=a+(3-r);
        if(r==0){
            s-=3;
        }
        cnt=((b-s)/3)+1;
        cout<<cnt<<endl;
        
    }
    
}