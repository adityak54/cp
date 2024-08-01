#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m = n;
        int size = 0;
        while(m){
            m=m/10;
            size++;
        }
        int temp = 1;
        while(size-1){
            temp*=10;
            size--;
        }
        cout<<abs(n-temp)<<endl;
    }
return 0;
}