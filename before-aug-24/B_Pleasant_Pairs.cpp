
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
    ll n;
    cin>>n;
    vector<ll> a(2*n+1,0);  


    // logic - khud se
    // code nahi hua (loop nahi bana paaya thiik se)

    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a[b] = i+1;   // storing the index
    }
    int ans = 0;
    for(int s=3;s<2*n;s++){    //  3 <= i+j <= 2n-1
        for(int i=1;i*i<s;i++){  // searching in array 
            if(a[i]!=0 && a[s/i]!=0 && s%i==0 && a[i]+a[s/i]==s) ans++;

            // 1 -> i exists in the array (ai) (0 nahi hona chahiye)
            // 2 -> s/i must exist (aj)
            // 3 -> s is divisible by i (i+j must be divisible by ai)
            // 4 -> index jo store kiye the uska use (i+j = s)
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