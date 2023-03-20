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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int plus=0,minus=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) plus++;
        else minus--;
    }

    for(int i=0;i<n-1;i++){
        if(a[i]==-1){
            if(a[i+1]==-1){
                minus+=2;
                plus+=2;
                cout<<minus+plus<<endl;
                return;
            }
        }
    }

    if(minus<0){
        cout<<minus+plus<<endl;
    }
    else {
        plus-=2;
        minus-=2;
        cout<<minus+plus<<endl;
    }

    return;
}
