#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,cnt=0,cnt1=0;
        cin>>n;
        vector<ll> v1;
        v1.push_back(n);
        while(n>0){

            if(n%2!=0){
                n--;
                cnt++;
                if(cnt1>0){cnt1=0;cnt++;}
                v1.push_back(n+1);
                v1.push_back(n);
            }
            else{
                n=n/2;
                cnt1++;
                
            }
            
        }
        if(v1[v1.size()-3]>2){
            if(cnt%2==1){
                cnt++;
            }
        }
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<' ';
        }
        cout<<endl;

        cout<<cnt<<endl;
        if(cnt%2==1){
            
            cout<<"Alice"<<endl;

        }
        else{
            cout<<"Bob"<<endl;
        }

        
    }
    
}