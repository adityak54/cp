#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]) swap(a[i],b[i]);
        }
        int maxOfA=INT_MIN;
        int maxOfB=INT_MIN;
        for(int i=0;i<n;i++){
            maxOfA=max(maxOfA,a[i]);
            maxOfB=max(maxOfB,b[i]);
        }
        cout<<maxOfA*maxOfB<<endl;
    }
return 0;
}