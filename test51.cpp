#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        vector<char> v1,v2,v3;
        long long int i=0,j=0;
        while(i<2*n && j<2*n){
            if(s1[i]==s2[j]){
                v1.push_back(s1[i]);
                i++;j++;
            }
            else{
                if(i>j){
                    v1.push_back(s2[j]);
                    j++;
                }
                else{
                    v1.push_back(s1[i]);
                    i++;
                }
            }
        }
        while(i<2*n){
            v1.push_back(s1[i]);
            i++;
        }
        while(j<2*n){
            v1.push_back(s2[j]);
            j++;
        }
        if(v1.size()<=3*n){
            for(int k=0;k<v1.size();k++){
                cout<<v1[k];
            }
            cout<<endl;
            continue;
        }
        
        
             i=0,j=0;
        while(i<2*n && j<2*n){
            if(s2[i]==s3[j]){
                v2.push_back(s2[i]);
                i++;j++;
            }
            else{
                if(i>j){
                    v2.push_back(s3[j]);
                    j++;
                }
                else{
                    v2.push_back(s2[i]);
                    i++;
                }
            }
        }
        while(i<2*n){
            v2.push_back(s2[i]);
            i++;
        }
        while(j<2*n){
            v2.push_back(s3[j]);
            j++;
        }
        if(v2.size()<=3*n){
            for(int k=0;k<v2.size();k++){
                cout<<v2[k];
            }
            cout<<endl;
            continue;
        }
        
         i=0,j=0;
        while(i<2*n && j<2*n){
            if(s1[i]==s3[j]){
                v3.push_back(s1[i]);
                i++;j++;
            }
            else{
                if(i>j){
                    v3.push_back(s3[j]);
                    j++;
                }
                else{
                    v3.push_back(s1[i]);
                    i++;
                }
            }
        }
        while(i<2*n){
            v3.push_back(s1[i]);
            i++;
        }
        while(j<2*n){
            v3.push_back(s3[j]);
            j++;
        }
        if(v3.size()<=3*n){
        for(int k=0;k<v3.size();k++){
            cout<<v3[k];
        }
        cout<<endl;
        }
        else{
            for(int k=0;k<3*n;k++){
                cout<<v3[k];
            }
            cout<<endl;
        }
        
    }
}