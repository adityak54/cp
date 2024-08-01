
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

bool f(string s,int n){
    stack<char> s1;
    for(int i=0;i<n;i++){
        if(s[i]=='(') s1.push(s[i]);
        else{
            if(s1.empty()){
                return false;
            }
            else s1.pop();
        }
    }
    if(!s1.empty()) return false;
    return true;
}
void Yowaimo(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countL = 0;
    int countR = 0;
    for(int i=0;i<s.size();i++){
         if(s[i]==')') countL++;
         else countR++;
    }
    if(countL!=countR) cout<<-1<<endl;
    else{
        string temp = s;
        reverse(temp.begin() , temp.end());
        if(f(s,n) || f(temp,n)){
            cout<<1<<endl;
            for(int i=0;i<n;i++) cout<<1<<" ";
            cout<<endl;
        }
        else{
            cout<<2<<endl;

            // 1 - already beautiful waala
            // 2 - beautiful nahi hai

            // balanced paranthesis waala hi logic
            stack<int> s1;
            vector<int> ans(n,2);  // sabko 2 kar diye fir already beautiful waalo ko 1 kar denge
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    s1.push(i);
                }
                else{
                    if(!s1.empty()){
                        ans[s1.top()] = 1;  // just pichhla '(' 1 ho jaayega
                        ans[i]=1;           // current ')' bhi 1 ho jayega
                        s1.pop();
                    }
                }
            }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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