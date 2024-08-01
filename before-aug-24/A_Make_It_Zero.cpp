#include<bits/stdc++.h>

#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // if(n%2==0){
    //     cout<<2<<endl;
    //     cout<<1<<" "<<n<<endl;
    //     cout<<1<<" "<<n<<endl;
    // }
    // else{
    //     cout<<4<<endl;
    //     cout<<1<<" "<<n<<endl;
    //     cout<<1<<" "<<n-1<<endl;
    //     cout<<n<<" "<<n<<endl;
    //     cout<<n<<" "<<n<<endl;
    // }
    int temp = a[0];
    for(int i=1;i<n;i++){
        temp^=a[i];
    }
    cout<<temp<<endl;

    for(int i=0;i<7;i++){
        int s = temp;
        for(int i=0;i<n;i++){
            temp^=s;
        }
        cout<<i<<"->"<<temp<<endl;
    }
    cout<<endl<<endl;
    
}
signed main(){
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}