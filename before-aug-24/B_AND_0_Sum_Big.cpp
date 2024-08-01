
    #define pi pair<int,int>
    #define ll long long int

    #include <bits/stdc++.h>
    using namespace std;

    ll powerof2(ll a){
    return a && !(a&a-1);
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
    ll mod = 1e9+7;
    void Yowaimo(){
        ll n,k;
        cin>>n>>k;
        ll ans = 1;
        for(int i=0;i<k;i++){
            ans = (ans*n)%mod;
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