#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];

        }
        
        sort(arr.begin(),arr.end());
        long long int min_value=arr[1]-arr[0],min_index=-10,min_value2=arr[n-1]-arr[n-2];
        long long int mini_value=min(min_value,min_value2);

        for(int i=1;i<n-1;i++){
            if(mini_value>arr[i+1]-arr[i]){mini_value=arr[i+1]-arr[i];min_index=i;}
        }
        if(min_index==-10){
            if(min_value>min_value2){
                cout<<arr[n-2]<<' ';
                for(long long int i=0;i<n-2;i++){
                    cout<<arr[i]<<' ';
                }
                cout<<arr[n-1]<<endl;
            }
            else{
                cout<<arr[0]<<' ';
                for(long long int i=2;i<=n-1;i++){
                    cout<<arr[i]<<' ';
                }
                cout<<arr[1]<<endl;

            }
        }
        else{
            cout<<arr[min_index]<<' ';
            for(long long int i=min_index+2;i<n;i++){
                    cout<<arr[i]<<' ';
                }
            for(long long int i=0;i<min_index;i++){
                    cout<<arr[i]<<' ';
                }    

            cout<<arr[min_index+1]<<endl;    
            
        }

        
    }
}