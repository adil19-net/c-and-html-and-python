#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
// function for (a power b)mod c 
long long int power(long long int a,long long int b){
    long long int ans=1;
    while(b){
        if(b&1){ans=(ans*a)%mod;}
        a=(a*a)%mod;
        b=b/2;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}