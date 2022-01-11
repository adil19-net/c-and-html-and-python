#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a;
        bool p=false;
        b=a/111;
        for(int i=0;i<=b;i++){
            if((a-(111*i))%11==0){
                cout<<"YES"<<endl;
                p=true;
                break;
            }
        }    
        if(!p)cout<<"NO"<<endl;    

        
    }
}