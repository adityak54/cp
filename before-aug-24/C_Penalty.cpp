
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
void generateAll(int i,string s,string temp,vector<string> &v){
    
    if(i==10){
        v.push_back(temp);
        return;
    }

    if(s[i]=='1' || s[i]=='0'){
        temp.push_back(s[i]);
        generateAll(i+1,s,temp,v);
    }
    else{
        temp.push_back('1');
        generateAll(i+1,s,temp,v);
        temp.pop_back();
        temp.push_back('0');
        generateAll(i+1,s,temp,v);
    }
}

void Yowaimo(){
    string s;
    cin>>s;
    vector<string> v;
    string temp;
    generateAll(0,s,temp,v);

    int ans = INT_MAX;


    for(int i=0;i<v.size();i++){

        int teamA_hit = 0;
        int teamB_hit = 0;
        int teamA_miss = 0;
        int teamB_miss = 0;
        int count = 0;

        for(int j=0;j<10;j++){
            count++;
            if(j%2==0){
                if(v[i][j] == '1') teamA_hit++;
                else teamA_miss++;
            }
            else if(j%2!=0){
                if(v[i][j] == '1') teamB_hit++;
                else teamB_miss++;
            }

            if(teamA_hit>(5-(teamB_hit+teamB_miss))+teamB_hit){
                break;
            }
            if(teamB_hit>(5-(teamA_hit+teamA_miss))+teamA_hit){
                break;
            }
        }
        ans=min(ans,count);
        
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