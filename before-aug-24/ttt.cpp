#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll f(ll k,string &  s,vector<string> &A,vector<int> &dp){
    ll n = s.size();
    ll m = A.size();
    
    if(k>=n) return 0;

    // if(dp[k]!=-1) return dp[k];
    
    ll ans = 1e8;
    string temp;
    for(int i=k;i<n;i++){
        temp.push_back(s[i]);
        // cout<<temp<<endl;
        for(int j=0;j<m;j++){
            string word = A[j];
            if(word.find(temp)==0){
                // cout<<temp<<endl;
                A[j].erase(0,i-k+1);
                ans = min(ans,1+f(i+1,s,A,dp));
                A[j] = word;
            }
        }
    }
    return dp[k]=ans;
}

int main(){
    vector<string> v = {"n","qnw","ifq","wiw","n"};
    string b = "ifqnw";
    vector<int> dp(b.size(),-1);
    cout<<f(0,b,v,dp);
    return 0;
}


int n;
cin>>n;
vector<int> a=input<int>(n);
