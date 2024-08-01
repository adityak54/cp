#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        bool check = true;
        long long int ans = 0;

        for(long long int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1] && arr[i]>0){
                 arr[i]=arr[i]/2;
                 ans++;
            }
            if(arr[i]==arr[i+1]){
                cout<<-1<<endl;
                check = false;
                break;
            }
        }
        if(check) cout<<ans<<endl;

    }
return 0;
}