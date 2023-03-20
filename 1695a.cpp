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
    int n,m,p = 1000,q=-1;
    cin>>n>>m;

    ll ara[n+1][m+1];
    int r,c;
    ll mx = -1e12;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) {
            cin>>ara[i][j];
            if(ara[i][j] > mx){
                r = i; c = j;
                mx = ara[i][j];
            }
        }
    }
    

    for(int i=1; i<=n; i++){
        int x,y,f=1;
        for(int j=1,k=i; k<=n; k++,j++){
            x = j;
            y = j + i - 1;
            cout<<x<<" "<<y<<" K: "<<k<<endl;
            if(x <= r && y >= r){
                
            }
            else {f=0; break;}
        }
        if(f){
            p = min(p, i);
        }
    }
    cout<<p<<endl;

    


    return;
}
