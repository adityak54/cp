#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        bool check = true;
        for(int i=0;i<n;i++){
            if(((sum-arr[i])/(n-1)==arr[i]) && ((sum-arr[i])%(n-1)==0)){
                cout<<"YES"<<endl;
                check = false;
                break;
            }
        }
        if(check) cout<<"NO"<<endl;

    }
return 0;
}