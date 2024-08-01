
#define pi pair<int,int>
#define pb push_back
#define li long long int
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
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    int ans = m.size();
    int count = 0;
    for(auto it:m){
        if(it.second%2==0) count++; 
    }
    if(count%2!=0) ans--;
    cout<<ans<<endl;

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