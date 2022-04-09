#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--){
        cin>>n;
        int arr[n],x;
        int o_max=0,e_min=INT_MAX;
        int pos1=0,pos2=0;
        long long int sum=0,sum1=0;
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=abs(x);
            if(i%2){
                if(arr[i]>o_max){
                    o_max=arr[i];
                    pos1=i;
                }
                 sum-=arr[i];
            }
            else{
                if(arr[i]<e_min){
                    e_min=arr[i];
                    pos2=i;
                }
                sum+=arr[i];
            }
        }
        int temp=arr[pos1];
        arr[pos1]=arr[pos2];
        arr[pos2]=temp;
        for(int i=0;i<n;i++){
            if(i%2)
                sum1-=arr[i];
            else
                sum1+=arr[i];
        }
        cout<<max(sum,sum1)<<"\n";
   }
   return 0;
}
