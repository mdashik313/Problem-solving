#include <bits/stdc++.h>
using namespace std;
void solve();

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)


int main()
{
    ios_base::sync_with_stdio(true); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
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
    vector<ll> v;
    while(n--) {
        ll x; cin>>x;
        v.pb(x);
    }

    for(int i=0; i<v.size()-1; i++){
        if(v[i] > v[i+1]) {
            cout<<"YES\n"; return;
        }
    }
    cout<<"NO\n";
    return;
}
