#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define rep(i,n) for (int i = 0; i <n; i++)
#define repone(i,n) for (int i = 1; i <=n; i++) 
using namespace std;
 
int main()
{
     string s;
     cin>>s;
     ll int n=s.length(), max= 0 ;
     int count=1;
     for(int i=0;i<n;i++)
     {
         if(s[i]==s[i+1])
         {
             count++;
         }
         else if(s[i]!=s[i+1])
         {
           
             if(count>=max)
             {
                 max=count;
             }
             count=1;
 
         }
     }
cout<<max;
    return 0;
}
