#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cntt=0,cntm=0;
        vector<int> v1,v2,v3;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                cntt++;
                if(cntt>n/3){
                    v3.push_back(i);
                }
                else{
                    v1.push_back(i);
                }
            }
            else{
                cntm++;
                v2.push_back(i);
            }
 
        }
        if(cntt!=2*cntm || (s[0]!='T') || s[n-1]!='T'){
            cout<<"NO"<<endl;
            continue;
        }
        bool p=true;
        for(int i=0;i<n/3;i++){
            if(v2[i]<v3[i] && v2[i]>v1[i]){
                continue;
            }
            else{
                p=false;
                break;
            }
        }
        if(p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
}