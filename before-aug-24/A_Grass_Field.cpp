#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        int count1 = 0;
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        for(int i=0;i<4;i++){
            if(arr[i]) count1++;
        }
        if(count1==0) cout<<0<<endl;
        else if(count1>=1 && count1<=3) cout<<1<<endl;
        else cout<<2<<endl;
    }
return 0;
}