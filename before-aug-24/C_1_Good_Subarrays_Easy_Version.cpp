
    #define pi pair<int,int>
    #define ll long long int

    #include <bits/stdc++.h>
    using namespace std;

    // ---------POWER OF 2 OR NOT----------
    ll powerof2(ll a){
    return a && !(a&a-1);
    }
    //-------------------------------------
    //----------SIEVE ---------------------
    ll N = 1e6;
    vector<ll> isPrime(N+1,1);
    void prime(){
        isPrime[0] = isPrime[1]=false;
        for(int i=2;i<=N;i++){
            if(isPrime[i]){
                for(int j=2*i;j<=N;j+=i){
                    isPrime[j] = 0;
                }
            }
        }
    }
    //------------------------------------------

    void Yowaimo(){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        // vector<ll> maxValidSubarray(n+1);
        // ll ans=0;
        // for(ll i=1;i<=n;i++){
        //     maxValidSubarray[i]=min(maxValidSubarray[i-1]+1,a[i-1]);
        //     ans+=maxValidSubarray[i];
        // }
        // for(int i=1;i<=n;i++) cout<<naxValidSubarray[i]<<" ";
        // cout<<endl;
        // cout<<ans<<endl;

        ll start = 0;
        ll ans = 0;
        ll j = 1;
        while(start<n){
            while(j<n){
                if(a[j]>=j-start+1 && j<n){
                    j++;
                }
                else break;
            }
            ans+=j-start;
            start++;
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

