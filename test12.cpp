#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        int arr[a],cnt=0,cnt1=0;
        for(auto &a:arr){
            cin>>a;
        }
        long long int sum=0;
        double avg;
        sum=accumulate(arr,arr+a,sum);
        avg=sum/float(a);
        for(long long int i=0;i<a;i++){
            if (arr[i]<avg){cnt+=(avg-arr[i]);}


            }
        sort(arr,arr+a);
        for(long long int i=0;i<a;i++){
            if(cnt>0){
                if(arr[i]>avg){
                    cnt-=(arr[i]-avg);
                    cnt1++;
                }
            }
        }
        if(remainder(avg,1)!=0 || cnt>0){
            cout<<-1<<endl;
        }
        else{
            cout<<cnt1<<endl;
        }
        }

    }
