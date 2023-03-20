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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout<<"Yes\n";return;
        }
    }

    int gc=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(a[i],a[j])<=2){
                cout<<"Yes\n"; return;
            }
        }
    }
    cout<<"No\n";return;

    
    return;
}
