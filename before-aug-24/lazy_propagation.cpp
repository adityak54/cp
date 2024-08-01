#define ll long long int
#include<bits/stdc++.h>
using namespace std;

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
void solve(){
    vector<int> a={1,2,3,4};
    SGTree s =(4);
    s.build(0,0,4,a);
    cout << s.query(0,0,4,1,2) << endl;
    s.update(0,0,4,1,3,2);
    cout << s.query(0,0,4,0,3) << endl;
}
int main(){
int t=1;
// cin>>t;
while(t--){
solve();
}
return 0;
}