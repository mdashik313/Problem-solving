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
    int n;
    cin>>n;
    int ara[n],ara2[128];
    setzero(ara2);
    for(int i=0; i<n; i++) {
        cin>>ara[i];
        ara2[ara[i]]++;
    }

    for(int i=0; i<n; i++){
        vector<int>v;
        for(int j=0; j<n; j++){
            if(j != i){
                v.push_back(ara[j]);
            }
        }
        int xo=v[0];
        for(int j=1; j<v.size(); j++){
            xo = xo ^ v[j];
        }
        if(ara2[xo] != 0){
            cout<<xo<<endl;
            return;
        }
    }
    return;
}
