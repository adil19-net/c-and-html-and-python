#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='a' && s[i+1=='b']){
                cnt1++;
            }
            else if(s[i=='b' && s[i+1]=='a']){
                cnt2++;
            }
        }
        if(cnt1==cnt2){
            cout<<s<<endl;
            continue;
        }
        if(cnt1>cnt2){
            while(cnt1!=cnt2){
                for(int i=0;i<s.length()-2;i++){
                    if(s[i]=='a' && s[i+1]=='b'){
                        if(s[i+2]=='a'){
                            cnt1--;
                            s[i]='b';
                            break;
                        }
                    }
                }
            }
            cout<<s<<endl;
        }
        else{
            while(cnt1!=cnt2){
                for(int i=0;i<s.length()-2;i++){
                    if(s[i]=='b' && s[i+1]=='a'){
                        if(s[i+2]=='a'){
                            cnt2--;
                            s[i]='b';
                            break;
                        }
                    }
                }
            }
            cout<<s<<endl;
        }
    }
}