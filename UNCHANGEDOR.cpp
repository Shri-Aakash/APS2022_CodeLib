#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	ofstream myfile("array.txt");
	while(t--){
	    cin>>n;
	    long long int arr[n+1]={0};
	    arr[1]=1;
	    long long int or_count=0;
	    //cout<<arr[1]<<" ";
	    for(int i=2;i<=n;i++){
	        arr[i]=i|arr[i-1];
	        //cout<<arr[i]<<" ";
	        if(arr[i]==arr[i-1])
	            or_count++;
            if(myfile.is_open()){
                myfile<<or_count<<", ";
            }
	    }
        myfile.close();
	    cout<<or_count<<"\n";
	}
	return 0;
}
