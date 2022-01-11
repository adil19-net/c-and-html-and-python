#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1 && k==1){
            cout<<"R"<<endl;
            continue;
        }
        if(k>ceil(n/float(2))){
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(cnt==k){
                    cout<<".";
                    continue;
                }
                if(i==j && i%2==1){
                    cout<<"R";
                    cnt++;
                }
                else{
                    cout<<".";
                }
            }
            cout<<endl;
        }

    }
}