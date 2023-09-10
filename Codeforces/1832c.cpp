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
    int n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    
    ll ans = 1,x=a[0],signalAct=-1,signal=-1;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])
            signal = 0;
        else if(a[i]>a[i-1])
            signal = 1;

        if(signal != signalAct) {
            ans++;
            signalAct = signal;
        }
    }
    cout<<ans<<endl;

    return;
}

