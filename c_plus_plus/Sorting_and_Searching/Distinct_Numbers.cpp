#include <bits/stdc++.h>
#define ll long long
#define repi(i,n) for (int i = 0; i < n; i++) 
#define repione(i,n) for (int i = 1; i <=n; i++) 
#define repj(j,n) for (int j = 0; j < n; j++) 
#define repjone(j,n) for (int j = 1; j <=n; j++) 
#define endl '\n'
#define vi vector<int>
#define pi pair<int, int>
#define pb(a) push_back(a)

using namespace std;
 
int main()
{ 
  ll  n , count=0;
  cin>>n;
  set<int> s;
  for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    for(auto x:s)
    {count++;}
cout<<count<<endl;
    return 0;
}
