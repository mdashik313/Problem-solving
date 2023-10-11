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

bool primeNumber(int n){

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve(){
    ll l,r;
    cin>>l>>r;
    int first_nonprime=-1;
    for(int i=l;i<=r;i++) {
    	if(!primeNumber(i) && i!=1) {
    		first_nonprime=i;
    		break;
    	}
    }
    int a,b;
    for(int i=2;i<=sqrt(first_nonprime);i++){
    	if(first_nonprime%i==0){
    		a = first_nonprime/i;
    		b = first_nonprime-a;
    	}
    }
    first_nonprime != -1 ? cout<<a<<" "<<b<<endl : cout<<"-1"<<endl;
    
}






