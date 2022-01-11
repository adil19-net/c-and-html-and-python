#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        char x=s[0];
        for(int i=0;i<n;i++){
            if(s[i]!=x){
                cnt++;
                x=s[i];
            }
        }
        if(cnt<k){
            cout<<-1<<endl;
            continue;
        }
        if(s[0]=='0'){//solving for first char being even or odd. THen further solving for different values of k.
            if(k%2==0){
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='0'){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
            else{
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='1'){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }

        }
        else{
            if(k%2==1){
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='0'){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
            else{
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='1'){
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }

        }
        


        
    
    
}
}
