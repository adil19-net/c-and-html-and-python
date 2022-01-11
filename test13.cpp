#include<bits/stdc++.h>
using namespace std;

 
 

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,i,j;
    cin>>n>>m>>i>>j;
    if(i<=n/2 && j<=m/2){
        cout<<"1 "<<m<<" "<<n<<" 1"<<endl;
    }
    else if(i>=n/2 && j>=m/2){
        cout<<"1 "<<m<<" "<<n<<" 1"<<endl;
    }
    else{
        cout<<"1 1 "<<n<<" "<<m<<endl;
    }
    }
}