#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,min_index;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if (arr[j] < arr[min_index]){
            min_index=j;}
        }
        swap(arr[i],arr[min_index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;


    }
