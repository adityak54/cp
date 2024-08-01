
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;



//-------------  CODE STARTS  -------------------

void Yowaimo(){
    // THIS IS WRONG BECAUSE JITNE BHI CHARACTERS MAXIMUM BAAR AA RAHE UN SABKE LIYE CHECK KARNA PADEGA
    string s;
    cin>>s;
    int n = s.size();
    vector<int> m;
    for(int i=0;i<n;i++){
        m[s[i]-'a']++;
    }
    sort()
    char c = 'a';
    int temp = -1;
    for(auto it : m){
        if(it.second>temp){
            temp = it.second;
            c = it.first;
        }
    }
    if(temp == 1){cout<<(int)(log2(n))<<endl; return;}
    // cout<<c<<" "<<temp<<endl;
    int maxDiff = 0;
    int prevInd = -1;
    for(int i=0;i<n;i++){
        if(s[i]==c && prevInd==-1){
            prevInd = i;
            maxDiff = i;
        }
        else if(s[i]==c){
            maxDiff = max(maxDiff,i-prevInd-1);
            prevInd = i;
        }
    }

    if(prevInd!=n-1) maxDiff = max(maxDiff,(n-prevInd-1));
    // cout<<"MAXDIFF->"<<" "<<maxDiff<<" "<<prevInd<<endl;
    if(maxDiff==0){cout<<0<<endl; return;}
    if(maxDiff==1){cout<<1<<endl; return;}
    
    int ans = 0;
    while(maxDiff){
        maxDiff/=2;
        ans++;
    }
    cout<<ans<<endl;
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
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

// IN STRING
// agar 0th index pe koi numeric operation karna hai to ek '0' add kardo starting me
