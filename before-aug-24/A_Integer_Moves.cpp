
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}

map<int,int> square;
void putSquares(){
    for(int i=1;i<=50;i++){
        square[i*i]++;
    }
}
void Yowaimo(){
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0){
        cout<<0<<endl;
        return;
    }
    ll temp = (a*a)+(b*b);
    if(square.find(temp)!=square.end()) cout<<1<<endl;
    else cout<<2<<endl;


 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin >> t;
    putSquares();
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}