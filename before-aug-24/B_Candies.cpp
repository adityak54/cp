
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


int f(vector<int> &ans,int n,int i,int count){
    if(i>n) return 1e8;
    if(i==n) return count;
    ans.push_back(2);
    int option1 = f(ans,n,2*i+1,count+1);
    ans.pop_back();
    ans.push_back(1);
    int option2 = f(ans,n,2*i-1,count+1);
    return min(option1,option2);
}
void Yowaimo(){
    int n;
    cin>>n;
    if(n%2==0) cout<<-1<<endl;
    else{
    vector<int> ans;
    int count = f(ans,n,1,0);
    int temp = 1;
    // int count = 0;
    // while(temp<n){
    //     temp*=2;
    //     count++;
    // }
    cout<<count-1<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
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