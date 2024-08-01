
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
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans = 0;
  int front = 0;
  int end = n-1;
  while(front<n-1 && arr[front+1]==1) front++;
  while(end>0 && arr[end-1]==1) end--;
  ans = end-front;
  if(ans<0) cout<<0<<endl;
  else cout<<ans<<endl;
  return;

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