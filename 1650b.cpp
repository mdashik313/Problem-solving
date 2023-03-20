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
    ll l,r,x;
    cin>>l>>r>>x;
    ll l_max,r_max,ans;

    if(r < x) { cout<<r<<"\n"; return; }
    else if(r==x){
        if(l==x) cout<<"1\n";
        else cout<<r-1<<"\n";
        return;
    }

    if(r % x == 0){
        r--;
        ans = floor((double)r/x) + (r%x);
    }
    else ans = floor((double)r/x) + (r%x);

    cout<<ans<<"\n";

    return;
}
