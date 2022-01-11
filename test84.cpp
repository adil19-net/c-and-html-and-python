#include<bits/stdc++.h>
using namespace std;
int dfs(int s){
    if(visited[s]){
        return;
    }
    visited[s]=true;
    for(int u:adj[s]){
        dfs(s);
    }
}
int n;
vector<bool> visited(n+1,false);
int main(){
    
    cin>>n;
    
    vector<int> v1[n];
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        v1[a].push_back(b);
        v1[b].push_back(a);


    }

}