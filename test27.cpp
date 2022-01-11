#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,cnt=0;
    cin>>n;
    long long int arr1[n],arr2[n];
    for(long long int i=0;i<n;i++){
       cin>>arr1[i];
    }
    for(long long int i=0;i<n;i++){
       cin>>arr2[i];
    }
    vector<long long int> v1;
    for(long long int i=0;i<n;i++){
       v1.push_back(arr1[i]-arr2[i]);   
    }
    sort(v1.begin(),v1.end());
    


    
}    
