#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<char>> v1((n+2),vector<char>(n+2));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>v1[i][j];
        }
    }
    v1[0][0]=v1[1][1];
    v1[n+1][n+1]=v1[n][n];
    bool p=true;
    int t=v1[2][1],v=v1[1][1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                if(v1[i][j]!=v || v1[n-i+1][j]!=v){
                    p=false;
                    break;
                }
                

            }
            else if(n-i+1!=j){
                if(v1[i][j]!=t){
                    p=false;
                    break;
                }
            }
            

        }
    }
    if(t==v){
        p=false;
    }
    if(p){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}