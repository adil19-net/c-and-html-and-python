#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(s1.length()!=s2.length()){
        cout<<"NO"<<endl;
    }
    else{
        int cnt=0;
        vector<char> v1,v2;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                cnt++;
                v1.push_back(s1[i]);
                v2.push_back(s2[i]);
            }
        }
        if(cnt==2){
            if(v1[0]==v2[1] && v1[1]==v2[0]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}