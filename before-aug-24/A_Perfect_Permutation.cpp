#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        if(n%2==0){
        for(int i=0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
        else{
            for(int i=0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        swap(arr[0],arr[n-1]);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
    }
return 0;
}