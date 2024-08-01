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
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) even.push_back(i+1);
            else odd.push_back(i+1);
        }
        bool check = true;
        if(even.size()==n || odd.size()==n){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=1;i<even.size();i++){
            if(even[i]%2!=even[0]%2){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
           
            
        }
        if(!check) continue;
        for(int i=0;i<odd.size();i++){
             if(odd[i]%2!=odd[0]%2){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        
    }
return 0;
}