#include<bits/stdc++.h>
using namespace std;
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
int main(){
    DSU ds(3);

    ds.unionBySize(1,2);
    if(ds.findUPar(1)==ds.findUPar(3)){
        cout<<"YES"<<endl; 
    }
    else cout<<"NO"<<endl;
    ds.unionBySize(2,3);
    if(ds.findUPar(1)==ds.findUPar(3)){
        cout<<"YES"<<endl; 
    }
    else cout<<"NO"<<endl;
    return 0;
}