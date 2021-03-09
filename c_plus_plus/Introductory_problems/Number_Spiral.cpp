#include <bits/stdc++.h>
#define endl '\n'
#define ALL(V) V.begin(), V.end()
#define L_B lower_bound
#define U_B upper_bound
#define pb push_back
 
using namespace std;
template<class T, class T1> int chkmin(T &x, const T1 &y) { return x > y ? x = y, 1 : 0; }
template<class T, class T1> int chkmax(T &x, const T1 &y) { return x < y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);
 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int  t;
    cin>>t;
    while(t--)
    {
        long long x , y , ans;
        cin>>x>>y;
        if(x==1&&y==1)
        {
            cout<<"1"<<endl;
        } else {
            if(x>y)
            {
                if(x%2==0){
                ans = x*x;
                ans = ans - y + 1;
                }
                else {
                    ans = (x-1)*(x-1);
                    ans = ans + y;
                }
            } else {
                if(y%2==1)
                {
                    ans = (y)*(y);
                    ans = ans - x + 1;
                }
                else {
                    ans = (y-1)*(y-1);
                    ans = ans + x;
                }
            }
             cout<<ans<<endl;
        }
       
    }
	
 
	return 0;
}
