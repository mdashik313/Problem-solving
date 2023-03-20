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
    long long n,k;

    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld", &n,&k);
        int ara[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&ara[i]);
        }
        ll maxv[n];
        for(int i=0; i<n-1; i++){
            maxv[i] = (pow(10,ara[i+1])-pow(10,ara[i]))/pow(10,ara[i]);
        }
        maxv[n-1] = 1000000009;
        

        ll sum = 0, k_ = k;
        for(int i=0; i<n; i++){
            if(maxv[i] <= k_) {
                sum+= maxv[i] * (ll) pow(10,ara[i]);
                k_ = k_ - maxv[i];
            }
            else {
                sum+= (k_ + 1) * (ll) pow(10,ara[i]);
                break;
            }
        }
        cout<<sum<<"\n";

       
    }

    return 0;
}
