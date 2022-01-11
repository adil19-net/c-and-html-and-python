#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int lo,hi,mid,ans;
    lo=1;
    hi=max(a,b)*c;
    mid=lo+(hi-lo)/2;
    ans=hi;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        long long int w=mid/a;
        long long int e=mid/b;
        unsigned long long int u=w*e;
        
        if (u>=c){
        ans=mid;
        hi=mid-1;}
        else lo=mid+1;
    }
    
    
    cout<<ans;
} 