#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int> q,arr;
       
        
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push_back(a);
            
            
        }
        if(q[0]!=n && q[n-1]!=n){
            cout<<-1<<endl;
            continue;
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
       
        if(q[0]==n){
            arr.push_back(n);
            for(int i=n-1;i>0;i--){
                arr.push_back(q[i]);
            }
        }
        if(q[n-1]==n){
            arr.push_back(n);
            for(int i=0;i<n-1;i++){
                arr.push_front(q[i]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;









    }    
}