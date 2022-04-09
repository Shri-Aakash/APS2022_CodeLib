#include <bits/stdc++.h>
using namespace std;

bool  isBetter(int m , int w , int m1 , int Women [4][4] , int n){
    for (int i =0 ; i < n ; i++){
        if(Women[w][i] == m)
            return true;
        if(Women[w][i] == m1)
            return false;
    }
}

void StableMarriage(int n , int Men[4][4] ,int Women [4][4] ){
    int *wPartner; 
    wPartner = new int[n];
    bool *mPaired;
    mPaired = new bool[n];
    memset(wPartner,-1,sizeof(wPartner)*sizeof(int));
    memset(mPaired,false,sizeof(mPaired)*sizeof(bool));
    int freeM =n;
    while (freeM>0){
        int m; 
        for (int i = 0 ; i<n ; i++){
            if (mPaired[i] == false)
                {m = i;
                break;
                }
        }
                for (int i = 0 ; i<n && (mPaired[m] == false) ;i++){
            int w; 
            w = Men[m][i];
            if (wPartner[w] == -1){
                wPartner[w] = m;
                mPaired[m] = true;
                freeM--;
                cout<<"Women"<<w<<"is paired with"<<m<<"\n";
            }
            else if(isBetter(m,w,wPartner[w],Women,n)){
                mPaired[wPartner[w]]=false;
                mPaired[m]=true;
                wPartner[w]=m;
                cout<<"Women"<<w<<"is paired with"<<m<<"\n";
            }
        }
    }
    cout<<"Women\t---x---Men\n";
    for(int i = 0 ; i<n ; i++){
        cout<<i<<"\t---x---"<<wPartner[i]<<"\n";
    }
}



int main(){
    int Men[4][4]={{3,1,2,0},
                   {1,0,2,3},
                   {0,1,2,3},
                   {0,1,2,3}};
    int Women[4][4]={   {0,1,2,3},
                        {0,1,2,3},
                        {0,1,2,3},
                        {0,1,2,3}};
    StableMarriage(4,Men,Women);
    return 0;
}