#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,q,l,r,cnt=0;
    cin>>t>>q>>l>>r;
    set<pair<int,int>> s,s2;
    for(int i=0;i<t;i++){
        pair<int,int> pii;
        cin>>pii.first>>pii.second;
        s.insert(pii);
    }
    for(int i=0;i<q;i++){
        pair<int,int> pii2;
        cin>>pii2.first>>pii2.second;
        s2.insert(pii2);
    }
    bool p;
    for(int j=l;j<=r;j++){
    p=false;
        for(pair<int,int> pii2:s2 ){
            
                pii2.first+=j;pii2.second+=j;
            
            
        
            
        
            for(pair<int,int>x:s)
            {
                if(pii2.second<=x.second && pii2.second>=x.first){
                    cnt++;
                    p=true;
                    break;
                }
                else if(pii2.first>=x.first && pii2.first<=x.second){
                    cnt++;
                    p=true;
                    break;
                }
                else if(pii2.first<=x.first && pii2.second>=x.second){
                    cnt++;
                    p=true;
                    break;
                }
            }
        if(p)break;
        }
        
        
    }
    cout<<cnt<<endl;

}