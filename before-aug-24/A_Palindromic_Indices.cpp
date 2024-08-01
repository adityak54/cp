
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

void Yowaimo(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()<3){
        cout<<s.size()<<endl;
        return;
    }
    char temp =  s[s.size()/2];
    int i=s.size()/2;
    int ans = 0;
        while(s[i++]==temp && i<=s.size()) ans++;
    
    if(ans==1 && s.size()%2!=0) cout<<ans<<endl;
    else if(ans==1 && s.size()%2==0) cout<<2<<endl;
    else if(ans>1){
        if(s.size()%2==0) cout<<2*ans<<endl;
        else cout<<(2*ans)-1<<endl;
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