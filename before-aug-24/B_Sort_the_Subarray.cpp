
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}

struct cmp{
bool operator()(pi a,pi b){
    if(a.first>b.first) return true;
    if(a.first==b.first){
       if(a.second<b.second) return true;
    }
return false;
  }
};

void Yowaimo(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }
    for(int i=l;i<=r;i++){
        largest = max(largest,a[i]);
        smallest = min(smallest,a[i]);
    }
    while(l){
        if(a[l-1]<=smallest){
            smallest = a[l-1];
            l--;
        }
        else break;
    }
    while(r<n-1){
        if(a[r+1]>=largest){
            largest = a[r+1];
            r++;
        }
        else break;
    }
    cout<<l+1<<" "<<r+1<<endl;
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