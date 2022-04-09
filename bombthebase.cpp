#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int pos=0;
        int arr[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]<x)
                pos=i;
        }
        cout<<pos<<endl;
    }
    return 0;
}
