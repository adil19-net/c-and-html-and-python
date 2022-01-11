#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long int ans=0;
        vector<long long int> v1(m),v2,v3(m);
        for(int i=0;i<m;i++){
            cin>>v1[i];
        }
        v2=v1;
        sort(v2.begin(),v1.end());
        for(int i=0;i<m;i++){
            int a=lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
            v3[a]=v1[i];
            for(int j=0;j<a;j++){
                if(v3[j]!=0){
                    ans++;
                }
            }
            }
            cout<<ans<<endl;
        }

        


    }