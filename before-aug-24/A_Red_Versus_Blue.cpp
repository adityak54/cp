#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int position = b+1;
        string ans ;
        while(position){
            int grp;
            if((r%position)==0) grp=r/position;
            else grp=(r/position)+1;
                while(grp--){
                 ans.push_back('R');
                 r--;
                }
                ans.push_back('B');
                position--;
            
        }
        ans.pop_back();
        cout<<ans<<endl;
        }
        
return 0;
}