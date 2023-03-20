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
    long long n,x;
    
    vector <ll> a;
    
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>x;
        a.pb(x);
    }

    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<"\n";
    
    for(int i=1; i<n-1; i++) {
        ll val1, val2;
        val1 = labs(a[i-1] - a[i]); val2 = labs(a[i+1] - a[i]);
        cout<<min(val1, val2)<<" ";
        val1 = labs(a[0] - a[i]); val2 = labs(a[n-1] - a[i]);
        cout<<max(val1, val2)<<"\n";
    }
    
    cout<<labs(a[n-2]-a[n-1])<<" "<<labs(a[0]-a[n-1])<<"\n";
    
    return 0;
}
