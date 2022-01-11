#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s="C"+s+"C";
        bool p,q=true;
        while(true){
            p=false;
        int k=s.length();   
            
            for(int i=1;i<=(k-2);i++){
                if((s[i]=='A' && s[i+1]=='B')||((s[i]=='B')&&(s[i+1]=='B'))){
                    s.erase(i,2);
                    
                    p=true;
                    break;
                    
                }


            }
            if(!p){
                cout<<k-2<<endl;
                break;
                
            }
            
        }
    }
}