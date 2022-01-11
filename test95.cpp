#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        bool arr[n]={1};
        cout<<arr[0]<<' '<<arr[1];

    }
}