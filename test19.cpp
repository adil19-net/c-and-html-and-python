#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        long long int b,c,k,ans=0;
        cin>>b>>c;
        if(abs(b-c)%2==1){
            cout<<-1<<endl;
        }
        else if(b==c && c==0){
            cout<<0<<endl;
        }
        else if(b==c){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }


    }
}