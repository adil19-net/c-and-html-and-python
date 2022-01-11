#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt1=arr[2]-arr[0],cnt2=arr[1]-arr[0];
    for(int i=1;i<n-1;i++){
        if(arr[i+1]-arr[i-1]<cnt1){
            cnt1=arr[i+1]-arr[i-1];
        }
        if(arr[i]-arr[i-1]>cnt2){
            cnt2=arr[i]-arr[i-1];
        }

    }
    cnt2=max(cnt2,arr[n-1]-arr[n-2]);
    cout<<max(cnt1,cnt2);
}