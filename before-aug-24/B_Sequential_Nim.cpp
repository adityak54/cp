
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n==1){
        cout<<"First"<<endl;
        return;
    }
    int count1 = 0;
    int i=0;
    while(arr[i++]==1) count1++;
    if(count1==n){
        if(n%2!=0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    else{
        if(count1%2==0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}