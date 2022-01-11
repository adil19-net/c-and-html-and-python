#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt1=0,cnt2=0;
        cin>>n;
        vector<int> arr1(n);
        cnt2=n;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                vector<int> arr2;
                for(int k=i;k<=j;k++){
                    if(arr1[k]<=j && arr1[k]>=i){
                        arr2.push_back(k);
                    }
                }
                if(is_sorted(arr2.begin(),arr2.end())){
                    cnt2++;
                }

            }
        }
        cout<<cnt2<<endl;

    }
}