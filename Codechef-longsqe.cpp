#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string bin;
		cin>>bin;
		int noz=count(bin.begin(),bin.end(),'0');
		int noo=count(bin.begin(),bin.end(),'1');
		if(noz==1||noo==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}