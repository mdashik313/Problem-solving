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
    int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;

    int m1,m2;
    m1 = min(l2,r2);
    if(m1 <= r1){
        if(m1 >= l1) cout<<m1<<endl;
        else {
            m2 = min(l1,r1);
            if(m2 <= r2) cout<<m2<<endl;
            else {
                cout<<m2+m1<<endl;
            }
        }
    }
    else {
        cout<<m1+l1<<endl;
    }
    // if(m1 >= l1 && m1 <= r1) cout<<m1<<endl;
    // else cout<<min(l1,r1)+min(l2,r2)<<endl;

    return;
}
