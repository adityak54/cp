#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int a;
            string s;
            cin>>a>>s;
            for(int j=0;j<a;j++){
                if(s[j]=='U'){
                    if(arr[i]==0) arr[i]=9;
                    else arr[i]-=1;
                }
                else{
                    if(arr[i]==9) arr[i]=0;
                    else arr[i]+=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}