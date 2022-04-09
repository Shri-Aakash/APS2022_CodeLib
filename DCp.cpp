#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int amt[n+1];
    for(int i=1;i<=n;i++)
        cin>>amt[i];
    for(int i=0;i<2*m;i++){
        int c,num_of_c;
        cin>>c>>num_of_c;
        int reaction[2*num_of_c+1];
        for(int j=1;j<=2*num_of_c;j++)
            cin>>reaction[num_of_c];
        for(int k=1;k<2*num_of_c;k+=2){
            int comp=reaction[k+1];
            amt[comp]=((amt[comp]+c*reaction[k])%mod)%mod;
        }
        amt[c]=0;
    }
    for(int i=1;i<=n;i++){
        cout<<amt[i]<<"\n";
    }
    return 0;
}
