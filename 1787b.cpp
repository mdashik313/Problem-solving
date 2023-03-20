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

int isPrime(ll n){
    for(ll i=2;i<=sqrtl(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void solve(){
    ll n; cin>>n;
    vector<ll>v;
    ll ans=0;

    if(isPrime(n)){
        cout<<n<<endl;
        return;
    }

    while(n % 2 == 0){
        v.push_back(2);
        n/=2;
    }

    for(ll i=3; i<=sqrtl(n); i+=2){
        while(n % i == 0){
            v.push_back(i);
            n/=i;
        }
    }
    
    if(n > 2)
        v.push_back(n);
        
    for(int i=v.size()-1;i>=0;i--){
        ll m=v[i],d=v[i];
        if(v[i]==1) continue;
        for(int j=i-1;j>=0;j--){
            if(v[j]!=d){
                m *= v[j];
                d = v[j];
                v[j] = 1;
            }
        }
        if(m!=1) ans += m;
    }
    
    cout<<ans<<endl;

    return;
}
