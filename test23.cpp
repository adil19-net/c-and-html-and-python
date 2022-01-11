#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b;
    cin>>a>>b;
    vector<long long int> v1;
    long long int cnt1=b,cnt2=0;
    char s;
    long long int c;
    for(long long int i=0;i<a;i++){
        
        cin>>s>>c;
        if(s=='+'){
            v1.push_back(c);
        }
        else{
            v1.push_back(-c);
        }
    
    }
    for(long long int i=0;i<v1.size();i++){
        if((cnt1+v1[i])>=0){
            cnt1=cnt1+v1[i];
        }
        else{
            cnt2++;
        }
    }
    cout<<cnt1<<' '<<cnt2<<endl;
}