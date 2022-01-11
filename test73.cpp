#include<bits/stdc++.h>
using namespace std;
int main(){
    
        unordered_set<int> s1;
        s1.insert(10);
        s1.insert(5);
        s1.insert(10);
        for(auto it=s1.begin();it!=s1.end();it++){
            cout<<*it<<' ';
        }
    
}