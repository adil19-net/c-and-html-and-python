#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()==1){
            cout<<0<<endl;
            continue;
        }
        map<char,int> m1;
        m1['a']=1;m1['b']=2;m1['c']=3;m1['d']=4;m1['e']=5;m1['f']=6;m1['g']=7;m1['h']=8;m1['i']=9;m1['j']=10;m1['k']=11;m1['l']=12;m1['m']=13;m1['n']=14;m1['o']=15;m1['p']=16;m1['q']=17;m1['r']=18;m1['s']=19;m1['t']=20;m1['u']=21;m1['v']=22;m1['w']=23;m1['x']=24;m1['y']=25;m1['z']=26;
        
        vector<int> v1(27);
        for(int i=0;i<s.length();i++){
            v1[m1[s[i]]]++;
            
        }
        int cnt=0,cnt1=0;
        for(int i=1;i<=26;i++){
            if(v1[i]==1){
                cnt++;
            }
            else if(v1[i]>1){
                cnt1++;
            }
        }
        
        cout<<cnt/2+cnt1<<endl;

        
    }
}