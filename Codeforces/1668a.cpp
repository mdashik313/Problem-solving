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
    ll n,m,ans;
    cin>>n>>m;

    if(n==m) {cout<<(n-1)*2<<endl; return;}
    else if(n==1 || m==1){
        if(labs(n-m)==1) cout<<"1\n";
        else cout<<"-1\n";
        return;
    }
    else if(n<m){
        ll mn = min(n,m);
        ans = (mn-1) * 2;
        if((m-n)%2==0){
            ans += (m-n)*2;
        }
        else ans += ((m-n-1)*2)+1;
    }
    else {
        ll mn = min(n,m);
        ans = (mn-1) * 2;
        if((n-m)%2==0){
            ans += (n-m)*2;
        }
        else ans += ((n-mn-1)*2)+1;
    }

    cout<<ans<<endl;
    

    return;
}
