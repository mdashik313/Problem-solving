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
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    multiset<ll>st;
    ll delta = 0;
    for(int i=0;i<n;i++){
        st.insert(a[i]+delta);
        ll ans=0;
        while(!st.empty()){
          if(*st.begin()-delta <= b[i]){
              ans += *st.begin()-delta;
              st.erase(st.begin());
          } 
          else {
              ans += st.size()*b[i];
              delta += b[i];
              break;
          }
        }

        cout<<ans<<" ";
    }
    cout<<endl;
  
    return;
}

