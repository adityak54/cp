
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
void operation1(vector<int> &a,int n){
    for(int i=0;i<2*n;i+=2){
        swap(a[i],a[i+1]);
    }
}
void operation2(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        swap(a[i],a[n+i]);
    }
}

void Yowaimo(){
    int n;
    cin>>n;
    vector<int> a(2*n);
    vector<int> sortedA;
    vector<int> originalA;
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        sortedA.push_back(a[i]);
        originalA.push_back(a[i]);
    }
    sort(sortedA.begin(),sortedA.end());
    // same operation do baar chalane pe original array aa raha
    // alternate operation chalayenge until we get sorted array or original array

    int ans1 = 0;
    int check = 1;
    if(a==sortedA){cout<<ans1<<endl; return;}
    while(1){
        if(check) {operation1(a,n); check = 0;}
        else {operation2(a,n); check=1;}
        ans1++;
        
        if(a==originalA){cout<<-1<<endl; return;}
        if(a==sortedA) break;
    }
    a = originalA;
    int ans2 = 0;
    check = 1;
    while(1){
        if(!check) {operation1(a,n); check = 1;}
        else {operation2(a,n); check=0;}
        ans2++;
        
        if(a==originalA){cout<<-1<<endl; return;}
        if(a==sortedA){break;}
    }
    cout<<min(ans1,ans2)<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}