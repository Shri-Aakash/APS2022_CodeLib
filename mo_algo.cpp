#include<bits/stdc++.h>
using namespace std;
int block;
// Structure to represent a query range
struct Query{
	int L, R;
};
bool compare(Query x, Query y){
	if (x.L/block != y.L/block)
		return x.L/block < y.L/block; 
	return x.R < y.R; 
} 
void Result(int a[], int n, Query q[], int m) { 
// Find block size 
	block = sqrt(n); 
	sort(q, q + m, compare); 
	int currL = 0, currR = 0; int currSum = 0; 
	for (int i=0; i L){
		currSum += a[currL-1];
		currL–;
	}
	while (currR <= R) 
	{ currSum += a[currR]; currR++; } 
	while (currR > R+1){
		currSum -= a[currR-1];
		currR–;
	}
}

// Driver program
int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i = 0;i>arr[i];
	//int n = sizeof(a)/sizeof(a[0]);
	int m;
	cin>>m;
	Query *q = new Query[m];
	for(int i = 0;i>x>>y;){
	q[i].L = x;
	q[i].R = y;
	}	
	Result(arr, n, q, m);
	return 0;
}