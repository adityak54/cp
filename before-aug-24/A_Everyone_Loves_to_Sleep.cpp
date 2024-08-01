
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

    int n,H,M;
    cin>>n>>H>>M;
    int ans1= INT_MAX;
    int ans2= INT_MAX;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a<H){
            int temp1 = 23-H+a;
            int temp2 = 60-M+b;
            if(temp1<ans1 || (temp1==ans1 && temp2<ans2)){
                ans1=temp1;
                ans2=temp2;
            }

        }
        else if(a>=H && b>M){
             int temp1,temp2;
             if(a!=H) temp1 = a-H-1;
             else temp1 = 0;
             temp2 = 

        }
        ans1=min(ans1,abs(H-a));
        ans2=min(ans2,abs(M-b));
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