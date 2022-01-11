#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        bool p=true;
        long long int arr[a+1];
        for(long long int i=0;i<a;i++){
            cin>>arr[i];
        }
        long long int cnt=0,cnt2=0,cnt3=-pow(10,9),cnt4=pow(10,9);
        for(long long int i=0;i<a;i++){
            if (arr[i]<=0)cnt++;
            if(arr[i]==0)cnt2++;
            if((arr[i]<0)&& (arr[i]>cnt3))cnt3=arr[i];
            

        }
        
        for(long long int i=0;i<a;i++){
            if((arr[i]>0)){cnt4=arr[i];}
            if(p&&(arr[i]>0)){
                cnt4=min(cnt4,arr[i]);
            }
        }   
        sort(arr,arr+a);
        
        
        for(long long int i=0;i<a-1;i++){
            if((arr[i]<=0)&&(arr[i+1]<=0)){
                if(abs(arr[i]-arr[i+1])<cnt4){
                    p=false;
                    break;

                }
            }
        }

        if((cnt==a))cout<<a<<endl;
        else if(p)cout<<cnt+1<<endl;
        else cout<<cnt<<endl;
        
        
    }
}