#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int f=ceil((b-1)/double(d))+(c-1)/d,g=ceil((a-b)/double(d))+(a-c)/d;

        if(abs((c-b))%d==0){
            cout<<(abs(c-b))/d<<endl;
        }
        else if((abs(c-1)%d)==0 || (abs(c-a)%d)==0){
            if((abs(c-1)%d)==0){
                if((abs(c-a)%d)==0){
                    cout<<min(f,g)<<endl;
                }
                else{
                    cout<<f<<endl;
                }
            }
            else{
                cout<<g<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}
