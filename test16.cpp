#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    map<char,int> m1;
    m1['a']=1;m1['b']=2;m1['c']=3;m1['d']=4;m1['e']=5;m1['f']=6;m1['g']=7;m1['h']=8;m1['i']=9;m1['j']=10;m1['k']=11;m1['l']=12;m1['m']=13;m1['n']=14;m1['o']=15;m1['p']=16;m1['q']=17;m1['r']=18;m1['s']=19;m1['t']=20;m1['u']=21;m1['v']=22;m1['w']=23;m1['x']=24;m1['y']=25;m1['z']=26;
    
    while(t--){
        string s;
        cin>>s;
        if(s.length()==1 && s[0]=='a'){
            cout<<"YES"<<endl;
            continue;

        }
        if(s.length()==1){
            cout<<"NO"<<endl;
            continue;
        }
        bool p=false;
        bool q=true;
        vector<int> v1;
        for(int i=0;i<s.length()-1;i++){
            v1.push_back(m1[s[i]]);
            if(s[i]=='a')p=true;
            if(!p){
                if(m1[s[i]]<=m1[s[i+1]]){
                    q=false;
                    break;
                }
                

            }
            if(p){
                if(m1[s[i]]>=m1[s[i+1]]){
                    q=false;
                    break;
                }
            }
        }
        v1.push_back(m1[s[s.length()-1]]);
        sort(v1.begin(),v1.end());
        for(int i=0;i<s.length();i++){
            if(v1[i]!=(i+1)){
                q=false;
                break;
            }
        
        }
        
        if(q)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }


        
    }
}