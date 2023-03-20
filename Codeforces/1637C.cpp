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
    ll n,m;
    cin>>n; m=n;
    vector<ll>v;
    bool ans=false;
    while(n--){
        ll x; cin>>x; v.pb(x);
    }
    ll count=0, even=0;

    if(m==3){
        if(v[1]%2==0) cout<<v[1]/2<<"\n";
        else cout<<"-1\n";
        return;
    }
    
    for(int i = 1; i < v.size()-1; i++){
        
        if(v[i]%2==0) {
            count = count + (v[i]/2);
            ans = true;
            even = 1;
        }

        else {
            if(even == 1){
                count = count + ((v[i]+1)/2);
            }
            else if(v[i] > 1) {
                
                    v[i]--;
                    count = 1 + count + (v[i]/2);
                    even = 1;
                    ans = true;
                
            }
            else {
                ans = false;
                v[i]++;
                count++;
            }
        }
        
    }

    if(ans){
        cout<<count<<"\n";
    }
    else {
        cout<<"-1\n";
    }

    return;
}
