//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))
// memset(variable_name, values, sizeof(variable name))
// s.lower_bound -> logn time (for set)
// s.erase(s.find(key)) -> to delete one occurence of an element in multiset


#define pi pair<int,int>
#define int long long int
#define sortaint(a) sort(a.begin(),a.end())
#define rsortaint(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

//---------- FOR USING ORDERED SET----------------
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//----------------------------------------------------------------

// --------- FACTORIAL----------
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
vector<int>factorial(int n,int m){
    vector<int>v(n);
    v[0]=1;
    for(int i=1;i<n;i++){
        v[i]=mod_mul(v[i-1],i,m);
    }
    return v;
}
// ---------POWER OF 2 OR NOT----------
int powerof2(int a){
   return a && !(a&a-1);
}
//----------PRINT BINARY OF A NUMBER ---------------------
void printBinary(int num){
for(int i=10;i>=0;i--){
cout<<((num>>i)&1);
}
}
//----------SIEVE ---------------------
int N = 1e6;
vector<int> isPrime(N+1,1);
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
//------------ALL DIVISORS OF A NUMBER----------------
vector<int>divisor(int n){
    vector<int>res;
    for (int i=1; i<=sqrt(n); i++){
        if (n%i == 0){
            if (n/i == i) res.push_back(i);
            else{
                res.push_back(i);
                res.push_back(n/i);
            } 
        }
    }
    return res;
}
//------------------------------------------
//------------------CUSTOM SORT-----------------
 bool cmp(pair<int, int> x, pair<int, int> y){
         if (x.first != y.first)
            return x.first < y.first; //return the one with smaller first element
         else
           return x.second < y.second; //if first element is equal then return the one with smainter second element
}

// -----------------CEIL------------------------
int meraceil(int a,int b){
    if(a%b==0) return a/b;
    return (a/b)+1;
}
//---------------- X TO THE POWER Y----------------
int power(int x,int y){
    int res=1;
    while(y>0){
        if(y&1)res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
//---------------- SEGMENT TREE ------------------
// Currently it is for to find minimum number in range l->r
class SegmentTree{
    vector<int> seg;
    public:
    SegmentTree(int n){
        seg.resize(4*n+1);
    }

    void build(int ind, int low, int high, int arr[]){
        if(high==low){
             seg[ind]=arr[low];
             return;
        }
        int mid = (low+high)/2;
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
        seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
    }
    int query(int ind,int low, int high, int l, int r){
        // no overlap
        if(low>r || high<l) return INT_MAX;

        // complete overlap
        if(low>=l && high<=r) return seg[ind];

        // partial overlap
        int mid = (low+high)/2;
        int left = query(2*ind+1,low,mid,l,r);
        int right = query(2*ind+2,mid+1,high,l,r);
        return min(left,right);
    }
    void update(int ind, int low, int high,int i, int val){
        if(low==high){
            seg[ind] = val;
            return;
        }
        int mid=(low+high)/2;
        if(i<=mid) update(2*ind+1,low,mid,i,val);
        else update(2*ind+2,mid+1,high,i,val);
        seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
    }
};
//------------------SEGMENT TREE-RANGE UPDATE (LAZY PROPAGATION)---------------
// currently it is for finding sum of a range
class SGTree{
    vector<int> seg,lazy;
    public:
    SGTree(int n){
        seg.resize(4*n+1);
        lazy.resize(4*n+1);
    }
    void build(int ind, int low, int high, vector<int> &a){
        if(low==high){
            seg[ind] = a[low];
            return;
        }
        int mid = (low+high)>>1;
        build(2*ind+1,low,mid,a);
        build(2*ind+2,mid+1,high,a);
        seg[ind] = seg[2*ind+1]+seg[2*ind+2];
    }
    void update(int ind,int low,int high, int l, int r,int val){
        // agar koi update hai to kardo aur children me bhej do
        if(lazy[ind]!=0){
            seg[ind]+=(high-low+1)*lazy[ind];
            if(low!=high){
                lazy[2*ind+1] = lazy[ind];
                lazy[2*ind+2] = lazy[ind];
            }
            lazy[ind] = 0;
        }

        // no overlap
        if(high<l || low>r) return;

        // complete overlap
        if(low>=l && high<=r){
            seg[ind]+=(high-low+1)*val;
            if(low!=high){
                lazy[2*ind+1] += val;
                lazy[2*ind+2] += val;
            }
            return;
        }

        // partial overlap
        int mid = (low+high)>>1;
        update(2*ind+1,low,mid,l,r,val);
        update(2*ind+2,mid+1,high,l,r,val);
        seg[ind] = seg[2*ind+1]+seg[2*ind+2];   
        
    }

    int query(int ind, int low, int high, int l, int r){
        // agar koi update hai to kardo pehle aur children me bhej do
        if(lazy[ind]!=0){
            seg[ind]+=(high-low+1)*lazy[ind];
            if(low!=high){
                lazy[2*ind+1] = lazy[ind];
                lazy[2*ind+2] = lazy[ind];
            }
            lazy[ind] = 0;
        }
        // no overlap
        if(high<l || r<low) return 0;

        // complete overlap
        if(low>=l && high<=r) return seg[ind];

        // partial overlap
        int mid = (low+high)>>1;
        int left = query(2*ind+1,low,mid,l,r);
        int right = query(2*ind+2,mid+1,high,l,r);
        return left+right;
    }
};
// ------------------DSU-------------------------
class DSU{
    vector<int> rank,parent,size;
    public:
    DSU(int n){
        rank.resize(n+1);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++) parent[i] = i;
        for(int i=0;i<=n;i++) size[i] = 1;
    }

    int findUPar(int node){
        if(node==parent[node]) return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v){
        int ultp_u = findUPar(u);
        int ultp_v = findUPar(v);
        if(ultp_u == ultp_v) return;
        if(rank[ultp_u]<rank[ultp_v]){
            parent[ultp_u] = ultp_v;
        }
        else if(rank[ultp_u]>rank[ultp_v]){
            parent[ultp_v] = ultp_u;
        }
        else{
            parent[ultp_u] = ultp_v;
            rank[ultp_v]++;
        }
    }
    void unionBySize(int u, int v){
        int ultp_u = findUPar(u);
        int ultp_v = findUPar(v);
        if(ultp_u == ultp_v) return;

        if(rank[ultp_u]>rank[ultp_v]){
            parent[ultp_v] = ultp_u;
            size[ultp_u]+=size[ultp_v];
        }
        else{
            parent[ultp_u] = ultp_v;
            size[ultp_v]+=size[ultp_u];
        }
    }
};

// TO SUBSTRACT NEAREST POWER OF 2 FROM N   

/*      int val =log2(n);
        int val2 = (int)pow(2,val);
        if(val2>n) val--;
        n-=((int)1<<(int)val);          */


//-----------------------SPARSE TABLE------------------------
const int MAX_N = 100005;
const int LOG = 17;
int a[100005];
int m[100005][17]; // m[MAX_N][LOG] -> m[i][j] is the minimum among a[i....i+2^(j-1)]
int bin_log[100005];

int query(int l, int r){
    int length = r - l + 1;
    int k = bin_log[length];
    return min(m[l][k], m[r-(1<<k)][k]);
}
void sparse(int n, vector<int> &a){
    bin_log[1] = 0;
    for(int i = 2; i <= n; i++){
        bin_log[i] = bin_log[i/2] + 1;
    }

    for(int i = 0; i < n; i++){
        m[i][0] = a[i];
    }

    for(int k = 1; k < LOG; k++){
        for(int i = 0; i +(1<<k) - 1 <= n; i++){
            m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
        }
    }
}
//-------------  CODE STARTS  -------------------

void Yowaimo(){
    
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}