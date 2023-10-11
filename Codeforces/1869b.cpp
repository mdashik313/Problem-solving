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
    int n,k,a,b;
    cin>>n>>k>>a>>b;

    vector<pair<ll,ll>>coor(n+1);
    vector<pair<int,int>> main_path;

    for(int i=1;i<=n;i++){
        int x_,y_; cin>>x_>>y_;
        coor[i] = make_pair(x_,y_);
    }
    ll majora_min=LLONG_MAX/2,majorb_min=LLONG_MAX/2;
    for(int i=1;i<=k;i++){
        majora_min = min(majora_min, abs(coor[a].first - coor[i].first)+abs(coor[a].second - coor[i].second));
        majorb_min = min(majorb_min, abs(coor[b].first - coor[i].first)+abs(coor[b].second - coor[i].second));
    }

    ll res=abs(coor[a].first-coor[b].first)+abs(coor[a].second-coor[b].second);
    res = min(res,majora_min+majorb_min);
    cout<<res;nl;

    return;
}




