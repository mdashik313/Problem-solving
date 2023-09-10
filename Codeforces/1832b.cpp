#include <bits/stdc++.h>
using namespace std;
void solve();

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                             freopen("output.txt", "w", stdout);


int main()
{
    fastIO
    #ifndef ONLINE_JUDGE
        fileIO
    #endif
    
    int t;
    
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    
    return 0;
}

void solve(){
    int n,k; cin>>n>>k;
    ll sum=0;
    ll a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    // for(int i=0;i<n;i++) {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    
    ll pref[k+1];
    pref[0] =  0;
    for(int i=0;i<n;i++){
        pref[i+1] = pref[i] + a[i];
    }
    ll ans = 0;
    for(int i=0;i<=k;i++){
        ans = max(ans, pref[n-k+i] - pref[i*2]);
    }
    cout<<ans<<endl;

    return;
}

