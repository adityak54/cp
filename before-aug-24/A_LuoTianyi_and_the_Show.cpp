
#define pi pair<int,int>
#define pb push_back
#define ll long long int
#define pop pop_back
#define ct cout 
#define el endl
#define sg string
#define vec vector<li>
#define ves vector<string>
#define isort(n) sort(n.begin(), n.end())
#define dsort(n) sort(n.begin(), n.end(), greater<int>());


#include <bits/stdc++.h>
using namespace std;

void Yowaimo(){

    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];


    vector<int> sit(m+1,0);
    int ans = 0;
    set<int> p;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            sit[v[i]]=1;
            p.insert(v[i]);
            ans++;
        }
    }

    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++){
        if(v[i]==-1) count1++;
        else if(v[i]==-2) count2++;
    }

    int alreadyoccupied = 0;
    for(int i=1;i<=m;i++){
        if(sit[i]==1) alreadyoccupied++;
    }
    if(ans==0){
        cout<<min(m,max(count1,count2))<<endl;
    }
    else{

            int firstWay  = min(m,count1+alreadyoccupied);
            int secondWay = min(m,count2+alreadyoccupied);

            int thirdway = 0;
            int i = 0;
            for(auto it:p){
                int leftvacant = it-1-i;
                int rightvacant = m-it-(p.size()-i-1);
                thirdway = max(thirdway,alreadyoccupied+min(leftvacant,count1)+min(rightvacant,count2));
                i++;
            }

            cout<<max(thirdway,max(firstWay,secondWay))<<endl;

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