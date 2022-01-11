#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;

        cin>>a>>b>>c>>d;
        int arr[]={a,b,c,d};
        sort(arr,arr+4);
        if(arr[0]==a && arr[1]==b)cout<<"NO"<<endl;
        else if (arr[0]==b && arr[1]==a)cout<<"NO"<<endl;
        else if (arr[0]==c && arr[1]==d)cout<<"NO"<<endl;
        else if(arr[0]==d && arr[1]==c)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }

        
    }
  
}
