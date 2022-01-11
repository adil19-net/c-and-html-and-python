#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        deque <ll>  v1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0){
                if(arr[i]>v1[0]){
                    v1.push_back(arr[i]);
                }
                else{
                    v1.push_front(arr[i]);
                }
            }
            else{
                v1.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<' ';
        }
        cout<<endl;
        
    }
}