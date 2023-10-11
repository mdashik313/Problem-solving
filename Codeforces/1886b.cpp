#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                freopen("output.txt", "w", stdout);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define exit return 0

#define cinn(a) for(auto& i : a) cin>>i
#define printa(a) for(auto& i : a) cout<<i<<" ";nl

// ll max(ll a,ll b){return a<b?b:a;}
// ll min(ll a,ll b){return a>b?b:a;}
// ll dmax(double a,double b){return a<b?b:a;}
// ll dmin(double a,double b){return a>b?b:a;}



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
    
    double Px,Py,Ax,Ay,Bx,By;
    cin>>Px>>Py>>Ax>>Ay>>Bx>>By;

    double AB = sqrt(abs(Ax-Bx)*abs(Ax-Bx) + abs(Ay-By)*abs(Ay-By));
    double AP = sqrt(abs(Ax-Px)*abs(Ax-Px) + abs(Ay-Py)*abs(Ay-Py));
    double A0 = sqrt(abs(Ax)*abs(Ax) + abs(Ay)*abs(Ay));

    double BP = sqrt(abs(Bx-Px)*abs(Bx-Px) + abs(By-Py)*abs(By-Py));
    double B0 = sqrt(abs(Bx)*abs(Bx) + abs(By)*abs(By));
    
    double res=max(min(AP,BP),min(A0,B0));
    if(min(AP,BP)==AP && min(A0,B0)==A0 || min(AP,BP)==BP && min(A0,B0)==B0){
        
    }
    else if(AB > res*2.0) {
        res = AB/2.0;
    }
    cout<<setprecision(10)<<res;nl;
    return;
}




