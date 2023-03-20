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
    ll q;
    cin>>n>>q;
    ll ara[n];
    for(int i=0; i<n; i++) cin>>ara[i];

    string s = "";

    for(int i=0; i<n; i++){
        ll diff = (n-i-q);
        if(diff <= 0 || ara[i] <= q) s += "1";
        else {
            if(diff == 1){
                if(ara[i] <= q) s += "1";
                else {
                    s += "0";
                }
            }
            else {
                s += "0";
            }
        }
    }
    cout<<s<<endl;

    return;
}
