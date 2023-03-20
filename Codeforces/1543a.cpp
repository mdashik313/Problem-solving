#include <bits/stdc++.h>
using namespace std;

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)

int main()
{
    ios_base::sync_with_stdio(true); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; 
    long long n,a,b;
    
    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld", &a,&b);
        // if(a==b) cout<<0<<" 0\n";
        // else if((ll)min(a,b) == 0) cout<<(ll)max(a,b)<<" 0\n";
        // else if(labs(a-b) == 1) cout<<1<<" 0\n";
        // else {
        //     ll m = labs(a-b);
        //     ll st;
        //     if((ll)min(a,b) == m) st = (ll)min(a,b);
        //     else if((ll)min(a,b) < m) st = labs((ll)min(a,b) - m);
        //     else {
        //         ll x = (ll)min(a,b);
        //         ll y = x;
        //         x = ceill(y / ( long double )m); 
        //         x = x*m;
        //         st = labs(x - y); 
        //     }
        //     cout<<m<<" "<<st<<"\n";
        // }
        
         if(a==b){
            printf("0 0\n");
        }
        else{
            ll dif=abs(a-b);
            printf("%lld %lld\n",dif,min(a%dif,dif-a%dif));
        }
    }
    
    return 0;
}

