#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();
vector<long long> sieve(long long MAXP);

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                             freopen("output.txt", "w", stdout);
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define nl cout<<"\n"
#define exit return

int main()
{
    fastIO
    #ifndef ONLINE_JUDGE
        //fileIO
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
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll even,first_odd;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            first_odd = a[i];
            break;
        }
    }

    if(a[0]%2==1){yes; exit;}
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            if(a[i]-first_odd > 0) continue;
            else {
                no; exit;
            }
        }
    }

    yes;
    return;
}

vector<long long> sieve(long long MAXP){
    vector<ll> res;
    vector<bool> mem(MAXP,1);
    mem[1]=0;
    for(int i=2;i<MAXP;i++){
        if(mem[i]==1){
            res.push_back(i);
            for(int j=i;j<MAXP;j+=i) {mem[j]=0;}
        }
    }
    return res;
}
