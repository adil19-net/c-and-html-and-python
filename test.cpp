#include <bits/stdc++.h>
using namespace std;
int func(int x){
    int cnt=0;
    while(x!=0){x=x/10;cnt++;}
    return cnt;


}

int func2(int x){
    int cnt=0;
    for(int i=0;i<x;i++)cnt+=(pow(10,i));
    return cnt;

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,cnt=0;
        cin>>n;
        if (n<10)cout<<n<<endl;
        else{
            int p=func(n);
            cnt+=(9)*(p-1);
            int l=func2(p);
            int r=l;
            
            while(r<=n){
                cnt++;
                r+=(l);
            }
            cout<<cnt<<endl;
            


            





        }
       
    }
    
    
}

