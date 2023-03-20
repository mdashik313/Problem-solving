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
    int n,count=0; cin>>n;
    vector<ll> v;
    for(int i=0; i<n; i++){
        ll x; cin>>x; v.pb(x); 
    }
    v.pb(0);

    if(n == 2) {
        cout<<count<<"\n"<<v[0]<<" "<<v[1]<<"\n"; return;
    }
    if(n == 3){
        if(v[1] <= v[0] || v[1] <= v[2]) cout<<count<<"\n"<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
        else cout<<1<<"\n"<<v[0]<<" "<<v[0]<<" "<<v[2]<<"\n";
        return;
    }

    for(int i=0; i<n-2; i++){
        if(v[i+1] > v[i]){
            if(v[i+2] >= v[i+1]) continue;
            else if(i+1 == n-1) break;
            ll m = (ll) max(v[i+1], v[i+3]);
            v[i+2] = m;
            i+=2;
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<"\n";


    return;
}
