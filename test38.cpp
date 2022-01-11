#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long ans=0;
        vector<long long int> arr1(m),arr2(m),arr3(m,-1);
        unordered_map<long long,int> m1;
        for(int i=0;i<m;i++){
            cin>>arr1[i];
            arr2[i]=arr1[i];
        }
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<m;i++){
            int a=upper_bound(arr2.begin(),arr2.end(),arr1[i])-arr2.begin()-1-m1[arr1[i]];
            
            arr3[a]=arr1[i];
            m1[arr1[i]]++;
            int j=0;
            
            while(j<a){
                if(arr3[j]>=1){
                    ans++;

                }
                j++;
            }
        }
        
        cout<<ans<<endl;
        


    }

}