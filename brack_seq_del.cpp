#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        int arr[n];
        memset(arr,-1,sizeof(arr));
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                arr[i]=0;
            }
            else{
                arr[i]=1;
            }
        }
        int c=0,r=n;
        for(int i=0;i<=n-2;){
            if(arr[i]==arr[i+1]){
                cout<<i<<"\n";
                c+=1;
                r-=2;
                i+=2;
            }
            else{
                if(arr[i]==0 && arr[i+1]==1){
                    cout<<i<<"\n";
                    c+=1;
                    r-=2;
                    i+=2;
                }
                else if(arr[i]==1 && arr[i+1]==0){
                    int j=i+1;
                    while(j<=n-1 && arr[j]!=1){
                        cout<<j<<"\n";
                        j++;
                    }
                    if(j==n){
                        break;
                    }
                    c+=1;
                    r=r-j-i-1;
                    i=j+1;
                }
            }
        }
        cout<<c<<" "<<max(0,r)<<"\n";
    }
    return 0;
}