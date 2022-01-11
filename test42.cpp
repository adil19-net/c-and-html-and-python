#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key=1,j;
    // key will serve as arr[i],as it will be changed to arr[j] if certain criterias are met
    for(int i=1;i<n;i++){
        j=i-1;
        key=arr[i];
        while(j>=0){
            if(key<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            else{j--;
                break;
            }  
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

}