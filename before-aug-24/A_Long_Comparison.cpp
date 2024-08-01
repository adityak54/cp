#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x1,x2,p1,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;
        int temp1=x1;
        int temp2=x2;
        int countX1=0;
        int countX2=0;
        while(temp1){
            countX1++;
            temp1=temp1/10;
        }
        while(temp2){
            countX2++;
            temp2=temp2/10;
        }
        if(x1>x2 && p1>p2) cout<<">"<<endl;
        else if(x1<x2 && p1<p2) cout<<"<"<<endl;
        else if(x1>x2 && p1<p2 && countX1==countX2) cout<<"="<<endl; 
        else if(x1<x2 && p1>p2 && countX1==countX2) cout<<"="<<endl; 

    }
    
return 0;
}