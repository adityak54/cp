#define ll long long int
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int cntPlus = 0, cntMinus = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '+') cntPlus++;
        else cntMinus++;
    }
    if(cntMinus > cntPlus){cout<<-1<<endl; return;}
    int leftMinus = 0, rightPlus = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '+') rightPlus = i;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '-'){
            leftMinus = i;
            break;
        }
    }
    if(leftMinus > rightPlus){cout << 1 << " " << 1 << endl; return;}
    swap(s[leftMinus], s[rightPlus]);
    int curr = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '+') curr++;
        else curr--;

        if(curr < 0){cout<<-1<<endl; return;}
    }
    cout << leftMinus+1 << " " << rightPlus+1 << endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}