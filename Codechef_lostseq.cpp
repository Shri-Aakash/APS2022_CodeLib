#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a,odd_c=0,even_c=0;
	    for(int i=0;i<2*n;i++){
	        cin>>a;
	        if(a%2)
	            odd_c++;
	       else
	            even_c++;
	    }
	    if(odd_c%2||even_c%2)
	        cout<<"NO"<<"\n";
	   else
	        cout<<"YES"<<"\n";
	}
	return 0;
}
