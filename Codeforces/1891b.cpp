#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                freopen("output.txt", "w", stdout);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define exit return 0

#define cinn(a) for(auto& i : a) cin>>i
#define printa(a) for(auto& i : a) cout<<i<<" ";nl

ll max(ll a,ll b){return a<b?b:a;}
ll min(ll a,ll b){return a>b?b:a;}


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
    int n,q;
    cin>>n>>q;
    vector<ll> a(n),b(q);

    cinn(a);
    cinn(b);

    unordered_map<int,int> mp;

    vector<ll> ppow;

    for(auto& val : b) {
        val = pow(2,val);
        if(mp[val]==0) ppow.push_back(val);
        mp[val] = 1;
    }

    for(auto& val : ppow){
        for(int i=0;i<n;i++){
            if(a[i]%val == 0){
                a[i] += val/2;
            }
        }
    }

    printa(a);
    
    return;
}




