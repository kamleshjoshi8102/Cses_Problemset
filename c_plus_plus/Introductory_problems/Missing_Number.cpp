#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> v;
    long long int n , sum=0 , sum1=0;
    cin>>n;
 
    for(int i=0;i<n-1;i++)
    {long long int x;
    cin>>x;
    v.push_back(x);
    }
   for(auto x:v)
   {
       sum+=x;
   }
 
    for(int i=1;i<=n;i++)
    {
        sum1+=i;
    }
   cout<<sum1-sum;
    return 0;
}
