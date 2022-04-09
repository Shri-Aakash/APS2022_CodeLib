#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int s_=s.size(),c=0;
        for(int i=0;i<s_;){
            if(s[i]==s[i+1]){
                c+=1;
                i+=2;
            }
            else{
                c+=1;
                i+=1;
            }
        }
        cout<<c<<"\n";
    }
}
