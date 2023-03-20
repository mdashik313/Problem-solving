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

    for(int i=0; i<n; i++) cin>>ara[i];

    int s_idx = 0;

    if(n == 1) {cout<<"1 1\n"; return;}
    else if(n == 2) {cout<<"1 2\n"; return;}


    for(int i=1; i<n; i++){
        if(ara[i] < ara[s_idx]) s_idx = i;
    }
    cout<<s_idx+1<<" ";

    s_idx = 0;

    for(int i=1; i<n; i++){
        if(ara[i] > ara[s_idx]) s_idx = i;
    }
    cout<<s_idx+1<<endl;


    return;
}
