#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,y,k,n;
    cin>>y>>k>>n;
    a=1;
    bool p=false;
    if((y+a>n) || (k>n)){
        cout<<-1<<endl;
    }
    else if(k==y && ((2*y)>n))cout<<-1<<endl;
    else{
        if(k>y){
            a=k-y;
        }
        else if(y>k){
            a=k-y%k;
        }
        else{
            a=y;
        }
        for(long long int i=a;i<=n-y;i+=k){
            cout<<i<<' ';
            p=true;
        }
        
        if(!p){
            cout<<-1<<endl;
        }
    }
    

}