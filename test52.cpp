// Selection Sort 
// Name:Adil Vinayak
// SID:20103034
// Branch:CSE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  //solving for t test cases.
    cin>>t;
    while(t--){
        int n; // n is the length of the array being input.
        cin>>n;
        int arr[n]; // arr is the array of length n to be sorted.
        for(int i=0;i<n;i++){
            cin>>arr[i]; // taking arr input.
        }
        int min_index;// declaring min_index.
        for(int i=0;i<n-1;i++){ 
            min_index=i;//min_index initialised with i.
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[min_index]){
                    min_index=j;//finding min value in unsorted portion.
                }
            }
            swap(arr[i],arr[min_index]); // swapping the min_index with i.
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' '; //outputting the array
        }
        cout<<"\n";

    }
    return 0;

}