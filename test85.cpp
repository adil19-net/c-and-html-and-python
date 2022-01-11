#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double mean=0;
        vector<ll> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
            mean+=(v1[i]);
        }
        mean=mean/double(n);
        mean=mean*2;
        ll cnt=0;
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            int l,h;
            if(i==n-1){
                if(binary_search(v1.begin(),v1.end()-1,mean-v1[i])){
                    l=lower_bound(v1.begin(),v1.end()-1,mean-v1[i])-v1.begin();
                    h=upper_bound(v1.begin(),v1.end()-1,mean-v1[i])-v1.begin();
                    cnt+=(h-l);
                }
            }
            else if(i==0){
                if(binary_search(v1.begin()+1,v1.end(),mean-v1[i])){
                    cnt++;
                }
            }
            else{
            if((binary_search(v1.begin(),v1.begin()+i,mean-v1[i])) || (binary_search(v1.begin()+i+1,v1.end(),mean-v1[i]))){
                cnt++;
            }
        }}
        if(mean/2==v1[0] && mean/2==v1[n-1]){
            cout<<((n)*(n-1))/2<<endl;continue;
        }
        if(cnt%2==1){
            cout<<cnt/2+1<<endl;
        }
        else{
            cout<<cnt/2<<endl;
        }
        
        

    }
}