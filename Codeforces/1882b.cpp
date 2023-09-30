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


int main()
{
    fastIO
    #ifndef ONLINE_JUDGE
        //fileIO
    #endif
    
    int t;
    
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    
    return 0;
}

void solve(){
    int n;cin>>n;
    vector<vector<int>> a(n);
    unordered_set<int> U,u;

    for(int i=0;i<n;i++){
        int size;cin>>size;
        a[i].push_back(size);
        for(int j=0;j<size;j++){
            int x;cin>>x;
            a[i].push_back(x);
            U.insert(x);
        }
    }

    ll res=0;
    for(auto& i : U){
        for(int j=0;j<n;j++){
            bool found=false;
            for(int k=1;k<a[j].size();k++){
                if(a[j][k]==i) found=true;
            }
            if(!found) {
                for(int k=1;k<a[j].size();k++){
                    u.insert(a[j][k]);
                }
            }
        }
        res = res > u.size() ? res : u.size();
        u.clear();
    }

    cout<<res;nl;
    return;
}




