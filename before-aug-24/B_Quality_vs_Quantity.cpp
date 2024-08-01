
#define pi pair<int,int>
#define pb push_back
#define li long long int
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
sort(arr,arr+n);
int countR = 0;
int countB = 0;
int sumR = 0;
int sumB = 0;
if(n%2==0){
    for(int i=n/2+1;i<n;i++){
        countR++;
        sumR==arr[i];
    }
    for(int i=0;i<=n/2;i++){
        countB++;
        sumB+=arr[i];
    }

    if(sumR>=sumB){
        while(sumR>=sumB) 
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