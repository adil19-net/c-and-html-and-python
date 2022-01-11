#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,cnt=0;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        bool p=true;;
        if(n==1){
            cout<<0<<endl;
        }
        else{
            int j=0;
            while(p && j<n){
                p=false;
                for(ll i=0;i<n-1;i++){
                    if((arr[i]%2==arr[i+1]%2)){
                        if((i+2)<=(n-1)){
                            if((arr[i+1]%2)!=(arr[i+2]%2)){
                                swap(arr[i+1],arr[i+2]);
                                cnt++;
                                p=true;
                                break;
                            }
                        }
                        else if(i-1>=0){
                            if((arr[i-1]%2)!=(arr[i]%2)){
                                swap(arr[i],arr[i-1]);
                                cnt++;
                                p=true;
                                break;
                            }

                        }
                        
                    }
                    
                }
                
 
            }
            bool q=true;
            for(ll i=0;i<n-1;i++){
                if((arr[i]%2)==(arr[i+1]%2)){
                    q=false;
                    break;
                    }
            }
            if(q)cout<<cnt<<endl;
            else{
                cout<<-1<<endl;
            }
    
    }}
}