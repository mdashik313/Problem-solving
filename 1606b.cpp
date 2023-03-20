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
    long long n,a,b;
    
    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld", &a,&b);
        ll count = 0;
        for(ll m=1; m<a; ) {
            if(m <= b) {
                m = m*2; count++;
            }
            else {
                count = count + (ll)ceill((a-m)/(long double)b);
                break;
            }
        }
        cout<<count<<"\n";
    }
    
    return 0;
}
