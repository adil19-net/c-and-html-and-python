#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,k;cin>>n>>k;
    vector<long double> arr;
    for( int i=0;i<n;i++){
        long double a;
        cin>>a;
        arr.push_back(a);
    }
    long double lo=1;
    long  double hi=*max_element(arr.begin(),arr.end());
    long double mid=lo+(hi-lo)/2.0;
    long double ans=hi;
    
    for(int u=0;u<200;u++){
        long double mid=lo+(hi-lo)/2.0;
        long long int cnt=0;
        
        for(int p=0;p<n;p++){
            cnt+=(floor(arr[p]/(mid)));
        }

        if (cnt==k){
            ans=mid;
            lo=mid;
        }
        else if (cnt>k){
            lo=mid;

        }
        else hi=mid;
    }
    cout.precision(7);
    std::cout<<fixed<<ans<<endl; 
    return 0;
}