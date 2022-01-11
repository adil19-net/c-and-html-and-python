#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n],arr2[n],arr3[n];
        vector<int> arr4[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            if(arr1[i]-1!=i){
            arr4[arr1[i]-1].push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
            arr3[arr2[i]-1]=i;
        }
        bool p=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<arr4[i].size();j++){
                
                if(arr3[arr4[i][j]]<=arr3[i]){
                    p=false;
                    
                    break;
                }
            }
            if(!p){
                break;
            }
        }
        
        /*if(!p){
            cout<<-1<<endl;continue;
        }*/
        
            for(int i=0;i<n;i++){
                cout<<arr3[i]<<' ';
            }
            cout<<endl;
        

        
        
    }    
}