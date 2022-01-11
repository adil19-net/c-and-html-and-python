#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,n;
    cin>>n>>a;
    vector<int> v1(n+2);
    for(int i=1;i<=n;i++){
        cin>>v1[i];
    }
    v1[0]=2;v1[n+1]=2;
    int i=a-1,j=a+1,cnt=0;
    if(v1[a]==1)cnt++;
    while(i>=1 || j<=n){
        if(i>=1 && j<=n){
            if(v1[i]==1 && v1[j]==1){cnt+=2;}
            i--;j++;
        }
        else if(i>=1 && j==n+1){
            if(v1[i]==1){cnt++;}
            i--;
        }
        else if(i==0 && j<=n){
            if(v1[j]==1){
                cnt++;
            }
            j++;
        }
    }
    cout<<cnt<<endl;




}
