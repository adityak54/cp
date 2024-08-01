#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(x){
    int SUM = 0;
    while(x){
        SUM+=x%10;
        x=x/10;
    }
    return SUM;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        for(int i=1;i<=n;i++){
            int x1 = sumOfDigits(i);
            int x2 = sumOfDigits(i+1);
            if(x1>x2) count++;
        }
        cout<<count<<endl;
    }
return 0;
}