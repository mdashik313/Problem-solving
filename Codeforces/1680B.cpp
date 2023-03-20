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
    int r,c; cin>>r>>c;
    char ara[r+1][c+1];
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) cin>>ara[i][j];
    }
    int d=100000000,a=0,b=0;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) {
            if(ara[i][j]=='R'){
                if(i+j-2 <= d){
                    a = i; b = j;
                    d = i+j-2;
                }
                
            }
        }
    }
    a = a -1; b = b-1;
    int flag = 1;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) {
            if(ara[i][j] == 'R'){
                if((i-a < 1) || (i-a > r) || (j-b < 1) || (j-b > c)) {flag = 0; break;}
            }
        }
    }

    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
   

    return;
}
