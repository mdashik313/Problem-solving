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
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<int> p(21,0);

    p[1]=1;
    p[2]=1;
    p[4]=1;
    p[8]=1;
    p[16]=1;

    for(int i=n;i>0;i--){
        if(a[i-1]>a[i]){
            if(p[i-1]==0) {
                no;
                return;
            }
        }
    }
    yes;
    
    return;
}




