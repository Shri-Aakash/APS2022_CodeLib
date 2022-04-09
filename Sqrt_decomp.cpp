#include<bits/stdc++.h>
using namespace std;
vector v(0);
int block_sum[1000]{0};
int blk_size; root n block sizes
//update operation
void update(int idx,int val){
	int block_idx = idx/blk_size; // Gives the block ids
	block_sum[block_idx] = block_sum[block_idx] + val – v[idx];
	v[idx] = val;
	}
//Query operation
int querry(int l,int r){	
	int sum = 0;
	//case1
	while(l<r && l%blk_size!=0 && l!=0){
		sum+=v[l];
		l++;
	}
//case2
	while(l+blk_size<=r){
		sum +=block_sum[l/blk_size];
		l+=blk_size;
	}
//case3
	while(l<=r){
		sum +=v[l];
		l++;
	}
	return sum;
}
void preprocess(int n){
	int blk_idx = -1;
	for(int i = 0;i<n;i++){
		if(i%blk_size==0)
		blk_idx++;
		block_sum[blk_idx]+=v[i];
	}
}
void printblock(){
	for(int i = 0;i<blk_size;i++)
		cout<<i<<” “<<block_sum[i]<<endl;

}

int main() {
	int n; cin>>n;
	blk_size = sqrt(n);
	v.clear();
	for(int i = 0;i>num;)
		v.push_back(num);
	} preprocess(n);
return 0;
}