#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        string n;cin>>n; 
        ll cnt=0,cnt2=0;
        bool p=false;
        if(n[q-1]=='0')p=true;
        for(int i=0;i<q;i++){
            if(n[i]!='0'){
                cnt+=((n[i])-'0');
                cnt2++;
            }
        }
        if(p){
            cnt+=cnt2;
        }
        else{
            cnt+=cnt2-1;
        }
        cout<<cnt<<endl;
    }


}
