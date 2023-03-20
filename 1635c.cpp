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
    int n; cin>>n;
    ll ara[n];
    for(int i=0; i<n; i++) cin>>ara[i];

    for(int i=0; i<n-1; i++){
        if(ara[i] > ara[i+1]){
            int m = i+2;
            if(m == n) { cout<<"-1\n"; return; }
            for(int j=m; j<n; j++){
                if(ara[j] >= 0) 
            }
        }
    }

    return;
}
