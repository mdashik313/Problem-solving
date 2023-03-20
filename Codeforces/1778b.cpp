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
#define for1(x,n)    for(int i=x;i<n;i++)
#define for2(x,n)    for(int i=x;i<=n;i++)
#define in  cin>>
#define out  cout<<


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
    int n,m,d; cin>>n>>m>>d;
    vector<int>p(n+1),a(m);
    map<int,int>pos;
    
    for(int i=1;i<=n;i++) {
        int x; in x;
        pos[x]=i;
        p[i] = x;
    }

    for(int i=0;i<m;i++) cin>>a[i];

    int ans=1e9;
    
    for(int i=0;i<a.size()-1;i++){
        if(pos[a[i]] >= pos[a[i+1]] || pos[a[i]]+d < pos[a[i+1]]) {
            cout<<"0\n"; return;
        }
        int x = pos[a[i]]+d-pos[a[i+1]]+1, res1=1e9,res2;
        if(n-pos[a[i+1]] + pos[a[i]] - 1 >= x)  res1 = x;
        res2 = pos[a[i+1]] - pos[a[i]];
        ans = min(ans,min(res1,res2));
    }
    out ans << endl;
    return;
}
