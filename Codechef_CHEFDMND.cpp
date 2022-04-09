#include <bits/stdc++.h>
using namespace std;

bool PerfectSquare(int x){
    int k=sqrt(x);
    return(k*k==x);
}

int Calc(int pos,int prev,int sum,vector<int>& vec){
    if(pos==vec.size())
        return PerfectSquare(sum);
    for(int i=prev;i<10;i++){
        vec[pos]=i;
        sum+=i*i;
        if(Calc(pos+1,i,sum,vec)){
            return 1;
        }
        sum-=i*i;
    }
    return 0;
}
int main() {
	int t,m;
	cin>>t;
	while(t--){
	    cin>>m;
	    vector<int> arr(m);
	    if(Calc(0,1,0,arr)){
	        for(int i=0;i<arr.size();i++)
	            cout<<arr[i];
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    cout<<"\n";
	}
}
