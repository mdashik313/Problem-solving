#include <bits/stdc++.h>
using namespace std;
void solve();

#define mod							1000000007
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                             freopen("output.txt", "w", stdout);
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define loop(n) for(int i=0;i<n;i++)
#define loop2(n) for(int i=1;i<=n;i++)
#define printloop(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" "

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
    int n;
    cin>>n;
    vector<ll> a(n),b(n);

    loop(n)
        cin>>a[i];
    loop(n)
        cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    if(a[0]<=b[0]){
        cout<<"0\n";
        return;
    }

    ll ans=1,ways=1,temp=0;
    loop(n) {
        ways--;
        while(temp<n && a[i]>b[temp]){
            ways++;
            temp++;
        }
        ans = (ans % mod) * (ways % mod);
    }
    cout<<ans<<endl;
    return;
}

