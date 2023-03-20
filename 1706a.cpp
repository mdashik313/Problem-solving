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
    int n,m; cin>>n>>m;
    int ara[n];
    for(int i=0; i<n; i++) cin>>ara[i];

    string s = ".";
    for(int i=0; i<m; i++) s += "B";

    for(int i=0; i<n; i++){
        int a = ara[i];
        int x = m+1-ara[i];

        if(a < x) {
            if(s[a]=='B') s[a] = 'A';
            else s[x] = 'A';
        }
        else {
            if(s[x]=='B') s[x] = 'A';
            else s[a] = 'A';
        }
    }
    for(int i=1; i<s.size(); i++) cout<<s[i];
    cout<<endl;

    return;
}
