#define pi pair<int,int>
#define pb push_back
#define ll long long int
#define pop pop_back
#define ct cout 
#define el endl
#define sg string
#define vec vector<li>
#define ves vector<string>
#define isort(n) sort(n.begin(), n.end())
#define dsort(n) sort(n.begin(), n.end(), greater<int>());


#include <bits/stdc++.h>
using namespace std;

void Yowaimo(){
   ll n,x;
   cin>>n>>x;
   ll arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int ans = 0;
   ll maxEle = arr[0];
   ll minEle = arr[0];
   for(int i=1;i<n;i++){
    maxEle = max(maxEle,arr[i]);
    minEle = min(minEle,arr[i]);
    if(maxEle-minEle>2*x){
        ans++;
        maxEle = minEle = arr[i];
    }
   }
   cout<<ans<<endl;
   return;
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