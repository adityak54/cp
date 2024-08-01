 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count_odd = 0;
        int count_even = 0;

        for(int i=0;i<n;i++){
            if(arr[i]%2==0) count_even++;
            else count_odd++;
        }
        int ans = min(count_even,count_odd);
        cout<<ans<<endl;
    }
 return 0;
 }