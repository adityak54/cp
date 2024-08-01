#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    string s;
    for(int i=0;i<m;i++) s.push_back('B');
    for(int i=0;i<n;i++){
    if(arr[i]<=m+1-arr[i] && s[arr[i]-1]!='A'){
         s[arr[i]-1]='A';
    }
    else if(s[m-arr[i]]!='A') s[m-arr[i]]='A';
    else s[arr[i]-1]='A';

    }
    cout<<s<<endl;
    }
    return 0;
}