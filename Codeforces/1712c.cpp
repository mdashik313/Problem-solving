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
    int n; cin>>n; int ara[n];
    for(int i=0; i<n; i++) cin>>ara[i];

    map<int,int>mp;
    int f=1,idx=n;
    for(int i=n-1; i>0; i--){
        if(ara[i-1] > ara[i]){
            mp[ara[i-1]] = 1;
            ara[i-1]=0;
            if(f){
                idx = i-1;
                f=0;
            }
        }
    }
    for(int i=n-1; i > idx; i--){
        if(mp[ara[i]] == 1) ara[i]=0;
        if(ara[i-1] > ara[i]){
            mp[ara[i-1]] = 1;
            ara[i-1] = 0;
        }
    }
    
    int count=0;
    for(auto it : mp) {
        if(it.second == 1)count++;
    }
    cout<<count<<endl;
    
    return;
}
