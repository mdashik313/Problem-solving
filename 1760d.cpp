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
    ll ara[n];


    for(int i=0;i<n;i++) {
        cin>>ara[i];
    }

    if(n==1) {cout<<"Yes\n"; return;}

    int startIdx=-1,ans=0;

    for(int i=1; i<n; i++){
        if(ara[i]<ara[i-1]){
            startIdx=i-1;
            if(i==n-1) ans++;
        }
        else if(ara[i]>ara[i-1]){
            if(startIdx==-1 || ara[startIdx]>ara[startIdx+1]){
                ans++;
                startIdx=i-1;
            }
        }
        else if(i==n-1 && (startIdx==-1 || ara[startIdx]>ara[startIdx+1])) ans++;

    }

    if(ans==1) cout<<"Yes\n";
    else cout<<"No\n";

    return;
}
