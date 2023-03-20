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
ll modulo_factorial(int n){
    ll product = 1, md = 998244353;
    for(int i=1; i<=n; i++){
        product = (product * i) % md;
    }

    return (product * product) % md;

}

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

    if(n%2 == 1) cout<<"0\n";
    else {
        cout<<modulo_factorial(n/2)<<"\n";
    }

    return;
}
