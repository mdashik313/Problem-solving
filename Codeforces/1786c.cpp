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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort(a,a+n);

    ll ans=0;
    if(n==1){
        if(a[0]<2){
            cout<<"0\n";
        }
        else cout<<a[0]-1<<endl;
        return;
    }
    if(a[0]!=1){
        ans += (a[0]-1);
        a[0] = 1;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) continue;
        else if(a[i]+1==a[i+1]) continue;
        else {
            ans += (a[i+1]-(a[i]+1));
            a[i+1] = a[i]+1;
        }
    }

    cout<<ans<<endl;

    return;
}
