#include<bits/stdc++.h>
using namespace std;
int bestTower(int N, int M, int H[],int T[], int R){
    int ans = 0;
    for(int i=0;i<M;i++){   
        int minRange = T[i]-R;
        int maxRange = T[i]+R;

        int temp = lower_bound(H,H+N,minRange)-H;
        int temp2 = upper_bound(H,H+N,maxRange)-H;
        ans = max(ans,temp2-temp+1);
    }
    return ans;
}