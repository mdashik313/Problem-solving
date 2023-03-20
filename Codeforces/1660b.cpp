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
    ll ara[n];
    for(int i=0; i<n; i++) cin>>ara[i];

    if(n==1) {
        if(ara[0] == 1) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }
    else {
        
        sort(ara, ara+n, greater<int>());
        if(labs(ara[0]-ara[1]) > 1) cout<<"No\n";
        else cout<<"Yes\n";

    }

    return;
}
