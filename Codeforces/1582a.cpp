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
    long long n, a,b,c,m,r;
    
    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld%lld", &a,&b,&c);
        ll sum = a+(b*2)+(c*3);
        m = sum/2;
        cout<<labs((sum-m) - m)<<"\n";
    }
    
    return 0;
}
