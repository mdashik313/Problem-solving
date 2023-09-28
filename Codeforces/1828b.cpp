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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"

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
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]!=i){
            int val = abs(a[i]-i);
            ans = __gcd(ans,val);
        }
    }
    cout<<ans<<endl;

    return;
}

