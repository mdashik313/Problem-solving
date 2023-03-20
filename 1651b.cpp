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
    int n;  cin>>n;

    vector<ll>v;
    v.pb(1);
    v.pb(3);
    ll x=3;
    for(int i=2; x<1000000001; i++){
        x = (ll)pow(3,i);
        if(x <= 1000000000) v.pb(x);
    }

    if(n > 19) cout<<"No\n";
    else {
        cout<<"Yes\n";
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

    return;
}
