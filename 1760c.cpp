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
    ll ara[n],ara2[n];

    map<ll,ll>mp;

    for(int i=0;i<n;i++) {
        cin>>ara[i];
        ara2[i] = ara[i];
        mp[ara[i]]++;
    }

    sort(ara2,ara2+n);
    ll firstMx=ara2[n-1],secondMx=ara2[n-2];

    for(int i=0;i<n;i++){
        if(ara[i]==firstMx){
            if(mp[ara[i]]==1){
                cout<<ara[i]-secondMx<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        else {
            cout<<ara[i]-firstMx<<" ";
        }
    }
    cout<<endl;

    return;
}
