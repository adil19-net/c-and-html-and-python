#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool p=false;
        vector<ll> v1(n);
        unordered_map<ll,int> m1;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>v1[i];
            m1[v1[i]]++;
            if(m1[v1[i]]>=3){
                p=true;
            }
            if(m1[v1[i]]==2){
                cnt++;
            }
        }
        if(p){
            cout<<-1<<endl;continue;
        }
        sort(v1.begin(),v1.end(),greater<ll>());
        if(cnt==0){
            for(int i=0;i<n;i++){
                cout<<v1[i]<<' ';
            }
            cout<<endl;continue;
        }
        if((n%2==0) && (cnt==(n/2))){
            cout<<-1<<endl;continue;
        }
        vector<ll> v2;
        for(int i=n-1;i>0;i--){
            if(v1[i]==v1[i-1]){
                v2.push_back(v1[i]);
            }
        }
        if(v2[v2.size()-1]==v1[0]){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<' ';
        }
        v1.push_back(v1[0]+1);
        for(int i=0;i<n;i++){
            if(v1[i]==v1[i+1]){
                continue;}
            else{
                cout<<v1[i]<<' ';
            }
        }
        cout<<endl;


    
    }
}
