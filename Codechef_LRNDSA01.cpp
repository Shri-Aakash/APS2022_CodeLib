#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	long int a,b=0;
	while(t--){
	    b=0;
	    cin>>a;
	    while(a!=0){
	        b=(b*10)+(a%10);
	        a=a/10;
	    }
	    cout<<b<<endl;
	}
	return 0;
}
