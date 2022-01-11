#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,cnt=0;
        cin>>a;
        bool p=false;
        while(a!=1){
            if(a%6==0){
                a=a/6;
                cnt++;
            }
            else if(a%3==0){
                a=a*2;
                cnt++;
                a=a/6;
                cnt++;
            }
            else{
                p=true;
                break;
            }
        }
        if(p)cout<<-1<<endl;
        else{
            cout<<cnt<<endl;
        }
    }
}       