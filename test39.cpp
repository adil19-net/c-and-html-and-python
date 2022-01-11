#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0;
        
            while(i<n){
                if(cnt==k)break;
            if(arr[i]>0){
                arr[i]--;
                arr[n-1]++;
                cnt++;

            }
            else{
                i++;
            }
            
        }
        for(int j=0;j<n;j++){
            cout<<arr[j]<<' ';
        }
        cout<<endl;
    }

}