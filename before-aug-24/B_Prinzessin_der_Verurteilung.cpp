
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
    string s;
    cin>>s;

    // 1 length ka substring 

    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'a'] = 1;
    }
    for(int i=0;i<26;i++){
        if(v[i] == 0){
            cout<<(char)('a'+i)<<endl;
            return;
        }
    }

    // 2 length ka substring

    set<string> subS;
    for(int i=0;i<n-1;i++){
        string temp;
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        subS.insert({temp});
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string temp;
            temp.push_back((char)('a'+i));
            temp.push_back((char)('a'+j));
            if(subS.find(temp)==subS.end()){
                cout<<temp<<endl;
                return;
            }
        }
    }

    // 3 length ka substring

    set<string> subS1;
    for(int i=0;i<n-2;i++){
        string temp;
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        temp.push_back(s[i+2]);
        subS1.insert({temp});
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            for(int k=0;k<26;k++){
                string temp;
                temp.push_back((char)('a'+i));
                temp.push_back((char)('a'+j));
                temp.push_back((char)('a'+k));
                if(subS1.find(temp)==subS1.end()){
                    cout<<temp<<endl;
                    return;
                }
            }
        }
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