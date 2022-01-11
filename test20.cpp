#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,min=10000;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
            if(arr[i]<min)min=arr[i];
        }
        auto itr=find(arr,arr+a,min);
        int c=itr-arr,d=0;
        for(int i=0;i<a;i++){
            if(i!=c){
                d+=((b-arr[i])/min);
            }
        }
        cout<<d<<endl;
    }
}