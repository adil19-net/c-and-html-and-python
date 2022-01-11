#include<bits/stdc++.h>
using namespace std;
long long int func(vector<long long int> v1,long long int mid){
    long long int cnt=0;
    for(int i=0;i<v1.size();i+=2){
        if(v1[i]==v1[i+1])
        else if(mid>v1[i+1]){cnt+=(v1[i+1]-v1[i]+1);}
        else{ cnt+=max((min(mid,v1[i+1])-v1[i]);}
    }
    return cnt;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k,cnt=0;cin>>n>>k;
    vector<long long int> v1;
    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v1.push_back(b);
    }
    long long int lo,hi,mid;
    lo=*min_element(v1.begin(),v1.end());
    hi=*max_element(v1.begin(),v1.end());
    mid=(lo)+(hi-lo)/2;
    cnt=lo;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        long long int p=func(v1,mid);
        if((p)<=k){
            lo=mid+1;
            cnt=mid;
            
        }
        else if (p>k){
            hi=mid-1;
        }
        
    }
    cout<<cnt<<endl;
}