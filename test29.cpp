#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    vector<int> xorf(3000001);
    xorf[0] = 0;
    for(int i = 1; i < 3000000; i++)
    {
        xorf[i] = (xorf[i - 1] ^ i);
    }
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if (b == xorf[a - 1])
    {
        cout << a << endl;
       
    }
    else if(b == xorf[a])
    {
        cout << a + 2 << endl;
        
    }
 
    else
    {
        cout << a + 1<< endl;
        
    }

        
        
        }
        
        
    }
