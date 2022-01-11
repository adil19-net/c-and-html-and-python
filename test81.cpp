#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll cnt=x,x1=x;
        ll cnt1=0,cnt2=0;
        int r=y%4;
        ll q=y/4;
        if(x%2==0){
            if(r==1){
                cnt-=y;
            }
            else if(r==2){
                cnt+=1;
            }
            else if(r==3){
                cnt+=(y+1);
            }
        
        }
        else{
            if(r==1){
                cnt+=(y);
            }
            else if(r==2){
                cnt-=1;
            }
            else if(r==3){
                cnt-=(y+1);
            }
        }
        cout<<cnt<<endl;
    }
}