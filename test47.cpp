#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int num1;
    for(int i=0;i<s.length();i++){
        num1=int(s[i]);
        if(num1>int('z')-k){
            num1=num1+k-int('z');
            num1%=26;
            s[i]=char(num1+int('a'));
        }
        else{
            num1+=k;
            s[i]=char(num1);
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    

}
