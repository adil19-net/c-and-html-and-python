#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b;
        vector<int> v1;
        for(long long int i=b;i<=b+30;i++){
            long long int cnt=0;
            if(i==1 && a>=b)continue;
            c=a;
            while(c!=0){
            cnt++;
            c=c/i;
        }
        v1.push_back(cnt+i-b);
        

        }
        
        cout<<*min_element(v1.begin(),v1.end())<<endl;

    }
}