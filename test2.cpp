#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++){
        long long int a,b;
        long long int c,d;
        cin>>a>>b;
        if (b==1)cout<<"NO"<<endl;
        
        if (b==2){

            if (a%4==0)cout<<"NO"<<endl;
            else{
                c=3*a;
                d=a;
                if ( (c+d)%(a*b)==0){
                    cout<<"YES"<<endl;
                    cout<<d<<' '<<c<<' '<<(d+c)<<endl;
                


            }}
            


        }
        else{
            c=a;
            d=(a*b)-a;
            cout<<"YES"<<endl;
            cout<<c<<' '<<d<<' '<<(d+c)<<endl;
            

        }



    }



}