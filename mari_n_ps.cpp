#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=0;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='0')
                cnt+=2;
            else if(s[i]=='0' && s[i+2]=='0'){
                cnt+=1;
            }
        }
        cout<<cnt<<"\n";
    }
}