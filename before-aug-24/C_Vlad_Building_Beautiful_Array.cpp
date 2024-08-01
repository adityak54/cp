
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
    vector<int> a(n);
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    int countEven = 0;
    int countOdd = 0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      minNum = min(minNum,a[i]);
      maxNum = max(maxNum,a[i]);
    }
    if(minNum%2==0){
        // ek bhi odd hua to nahi ho paayega
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }

    else{
        // kuchh bhi ho chalega
        cout<<"YES"<<endl;
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