#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt1,cnt2,cnt3;
        bool p=false,q=false,r=false,t=false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='5' && p==false){
                cnt1=i;
                p=true;
            }
            if((s[i]=='2' || s[i]=='7') && (p==true)){
                cnt2=i;
                q=true;
                cout<<cnt1-cnt2+1<<endl;
                t=true;
                break;
            }
            if(s[i]=='0' && p==false){
                cnt1=i;
                p=true;
            }
            if((s[i]=='5' && p==true)){
                cnt2=i;
                q=true;
                cout<<cnt1-cnt2+1<<endl;
                t=true;
                break;
            
            
        }
        }}

}