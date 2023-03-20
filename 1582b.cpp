#include <bits/stdc++.h>
using namespace std;

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)

int main()
{
    ios_base::sync_with_stdio(true); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; 
    long long n;
    
    scanf("%d", &t);
    while(t--) {
        scanf("%lld", &n);
        ll a, one=0,zero=0;

        for(int i=0; i<n; i++) {
            scanf("%lld", &a);
            if(a==1) one++;
            else if(a==0) zero++;
        }
        ll p = pow(2,zero);
        cout<<one*p<<"\n";
    }
    
    return 0;
}
