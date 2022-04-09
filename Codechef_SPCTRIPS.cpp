#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    int trip=0;
	    cin>>n;
	    for(int c=1;c<=n;c++){
	        for(int b=c;b<=n;b+=c){
	            if(b%c==0){
	                for(int a=c;a<=n;a+=b){
	                    if(a%b==c)
	                        trip++;
	                }
	            }
	        }
	    }
	    cout<<trip<<endl;
	}
	return 0;
}
