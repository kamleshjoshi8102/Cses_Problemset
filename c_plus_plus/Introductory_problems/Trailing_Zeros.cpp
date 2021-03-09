#include<iostream>
 
 
using namespace std;
 
 
int main()
{
    int count =0 , n;
    cin>>n;
    while(n>0)
    {
        count=count+n/5;
        n=n/5;
    }
    cout<<count;
    return 0;
}
