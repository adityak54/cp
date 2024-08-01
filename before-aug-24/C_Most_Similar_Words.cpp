
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


int diff(string a,string b,int m){
    int ans = 0;
    for(int i=0;i<m;i++){
        ans+=abs(b[i]-a[i]);
    }
    return ans;

}
void Yowaimo(){

    int n,m;
    cin>>n>>m;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int ans = INT_MAX;
    int temp = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            temp = 0;
            for(int k=0;k<m;k++){
                temp+=abs(v[i][k]-v[j][k]);
            }
            ans=min(ans,temp);
        }
    }
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