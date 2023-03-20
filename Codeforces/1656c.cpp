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
    int count0=0,count1=0,count2=0;

    for(int i=0; i<n; i++) {
        cin>>ara[i];
        if(ara[i] == 0) count0 = 1;
        else if(ara[i] == 1) count1++;
        else if(ara[i] == 2) count2 = 1;
    }

    bool f=true;
    for(int i=0; i<n-1; i++){
        if(ara[i] != ara[i+1]){
            f = false;
            break;
        }
    }

    if(f) {
        cout<<"Yes\n";
        return;
    }
    
    if(count0 && count1) cout<<"No\n";
    else if(count0) cout<<"Yes\n";
    else if(count1){
        if(count2){
            cout<<"No\n";
        }
        else {
            sort(ara, ara+n);
            bool flag = true;
            for(int i=count0; i<n-1; i++){
                if(ara[i] + 2 != ara[i+1]) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    else cout<<"Yes\n";

    return;
}
