#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        long long int i,j,cnt=1;
        for(long long int k=1;k<=40000;k++){
            if(a>cnt){
                cnt+=(2*k);
            }
            else if(a==cnt){
                cout<<k<<' '<<k<<endl;
                break;
            }
            else{
                if(cnt-k+1<=a){
                    i=k-1-(cnt-a);
                    j=k-1;
                    cout<<i+1<<' '<<j+1<<endl;
                    break;

                }
                else{
                    k--;
                    cnt=cnt-(2*k);
                    i=k-1;
                    j=k-1+(cnt-a);
                    cout<<i+1<<' '<<j+1<<endl;
                    break;
                }

            }
        }
    }
}