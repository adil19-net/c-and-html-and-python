#include<iostream>
#include <cmath>
using namespace std;
bool fun(double x){
    double k = sqrt(x);
    double res=remainder(k,1);
    if(res==0){
        return true;
    }
    else return false;
}   


int main(){
    long long int t;cin>>t;
    while(t--){
        bool k =true;
        int a;cin>>a;
        long long int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        for(int i=0;i<a;i++){
            if (!fun(arr[i])){
                cout<<"YES"<<endl;
                k=false;
                break;
                
            }



        }
        if (k)cout<<"NO"<<endl;

    }

}