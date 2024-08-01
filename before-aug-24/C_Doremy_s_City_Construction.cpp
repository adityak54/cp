
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]==a[n-1]){
            cout<<(n/2)<<endl;
            return;
            // saare elements same hai to har ek pair ka disconnected graph bana denge
        }

        ll ans = 0;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                ans=max(ans,(ll)i*(n-i));
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