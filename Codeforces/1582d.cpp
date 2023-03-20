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
    long long n;

    scanf("%d", &t);
    while(t--) {
        vector <ll> a,b;
        scanf("%lld", &n);
        int val;
        for(int i=0; i<n; i++) {
            cin>>val;
            a.pb(val);    
        }

        if(n%2 == 0) {
            for(int i=0; i<n; i+=2) {
                b.pb(a[i+1]);
                b.pb(-a[i]);
            }
        }
        else {
            ll a1,a2,a3;
            a1 = a[0] + a[1]; a2 = a[1] + a[2]; a3 = a[0] + a[2];

            if(a1 != 0) {
                b.pb(-a[2]); b.pb(-a[2]); b.pb(a1);
            }
            else if(a2 != 0) {
                b.pb(a2); b.pb(-a[0]); b.pb(-a[0]);
            }
            else {
                b.pb(-a[1]); b.pb(a3); b.pb(-a[1]);                
            }

            for(int i=3; i<n; i+=2) {
                b.pb(a[i+1]);
                b.pb(-a[i]);
            }
        }
        for(int i=0; i<n; i++) {
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
