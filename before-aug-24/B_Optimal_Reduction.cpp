#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        deque<long long int> dq;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
            dq.push_back(arr[i]);
        }
        sort(arr,arr+n);
        bool check = true;
        for(long long int i=0;i<n;i++){
            if(arr[i]==dq[0]){
                dq.pop_front();
            }
            else if(arr[i]==dq[dq.size()-1]){
                dq.pop_back();
            }
            else{
                check=false;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        
    }
return 0;
}