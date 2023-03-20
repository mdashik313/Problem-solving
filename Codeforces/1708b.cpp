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
    int n; 
    ll l,r;
    cin>>n>>l>>r;
    int ara[n+1];

    for(int i=2; i<=n; i++) {
        int a = ceil((l*1.0)/i);
        if((a*i >= l) && (a*i <= r)) {
            ara[i] = a*i;
        }
        else {cout<<"NO\n"; return;}
    }

    cout<<"YES\n"<<l<<" ";
    for(int i=2; i<=n; i++) cout<<ara[i]<<" ";
    cout<<endl;

    return;
}
