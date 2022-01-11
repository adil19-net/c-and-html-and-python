#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l, int m, int r){
    int arr1[m-l+1],arr2[r-m];
    int la=m-l+1,ra=r-m;
    for(int i=0;i<la;i++){
        arr1[i]=arr[l+i];
    }
    for(int i=0;i<ra;i++){
        arr2[i]=arr[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<la && j<ra){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;k++;
        }
        else{
            arr[k]=arr2[j];
            j++;k++;
        }
    }
    while(i<la){
        arr[k]=arr1[i];
        k++;i++;
    }
    while(j<ra){
        arr[k]=arr2[j];
        j++;
        k++;
    }

}

void merge_sort(int *arr,int l,int r){
    int m;
    if(l<r){
        m=(l+(r-l)/2);
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}