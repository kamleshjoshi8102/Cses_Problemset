#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define rep(i,n) for (int i = 1; i <=n; i++) 
using namespace std;
 
int main()
{
     int n;
     cin>>n;
     if( n==2 || n==3)
     {
         cout<<"NO SOLUTION";
     }
     else
     {
         rep(i , n)
     {
         if(i%2==0)
         {
             cout<<i<<" ";
         }
     }
     rep(i,n)
     {
         if(i%2!=0)
         {
             cout<<i<<" ";
         }
     }
     }
 
 
    return 0;
}
