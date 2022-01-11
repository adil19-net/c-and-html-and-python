#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')cnt1++;
            else{
                cnt2++;
            }
        }
        vector<vector<char>> v1(n,vector<char>(n));
        if(cnt2>0 && cnt2<3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int cnt3=0,cnt4=0;
            bool p=false;
            for(int i=0;i<n;i++){
                
                for(int j=0;j<n;j++){
                    if(i==j){
                        v1[i][j]='X';
                    }
                    else if(s[i]=='1' || s[j]=='1'){
                        v1[i][j]='=';v1[j][i]='=';
                    }
                    else{
                        
                        if(cnt3==0){
                            if(cnt4==0){
                                v1[i][j]='+';v1[j][i]='-';
                                cnt4++;
                            }
                            else{
                                v1[i][j]='-';v1[j][i]='+';
                            }
                            p=true;
                        }
                        else{
                            if(j>i){
                                v1[i][j]='+';v1[j][i]='-';

                            }
                            
                        }
                    }

                }
                if(p){
                cnt3++;}
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<v1[i][j];
                }
                cout<<endl;
            }
        }

        

    }
}            