#include <bits/stdc++.h>
using namespace std;

void yowaimo(){
    int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 0, j = 0;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                int check = 0;
                for (int k = 0; k < n; k++)
                {
                    if ((abs(arr[i] - arr[k]) + abs(arr[k] - arr[j])) == abs(arr[i] - arr[j]))
                    {
                        check++;
                    }
                }
                if(check==n) {
                    cout<<j+1<<" "<<i+1<<endl;
                    return;
                }

            }
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        yowaimo();
    }

    return 0;
}