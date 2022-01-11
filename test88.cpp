#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(is_sorted(s.begin(),s.end())){
        cout<<0<<endl;
        return;
    }
    int cnt=0,cnt2=0,cnt3=0;
    vector<int> v1,v2,v3;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
            v1.push_back(i+1);
        }
        else{
            v2.push_back(i+1);
        }
    }
    
    for(int i=0;i<v1.size();i++){
        if(v1[i]<=(n-cnt)){
            v3.push_back(v1[i]);
        }
    }
    for(int i=0;i<v2.size();i++){
        if(v2[i]>(n-cnt)){
            v3.push_back(v2[i]);
        }
    }
    cout<<1<<endl;
    cout<<v3.size()<<' ';
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<' ';
    }
    cout<<endl;return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}