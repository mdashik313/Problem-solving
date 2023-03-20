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
    int ara[n];

    for(int i=0; i<n; i++) cin>>ara[i];

    if(ara[0]==1) {cout<<"YES\n"; return;}
    else if(ara[1]%ara[0] != 0) {cout<<"NO\n"; return;}
    else {
        int r = ara[1]/ara[0], flag = 1;
        if(r==1) r = ara[0];
        for(int i=2; i<n; i++){
            if((ara[i] % r) != 0) {cout<<"NO\n"; return;}
        }
        {cout<<"YES\n"; return;}
    }

    return;
}
