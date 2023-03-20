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
    int ara[2][n];
    int mx = -9999,mx_count=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++) {
            cin>>ara[i][j];
            if(ara[i][j] > mx) mx = ara[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++) {
            if(ara[i][j] == mx) mx_count++;
        }
    }
    if(ara[0][0]==mx) mx_count--;

    cout<<mx+mx_count<<endl;

    return;
}
