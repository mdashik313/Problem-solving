#include <bits/stdc++.h>
using namespace std;


#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)
#define fastIO ios_base::sync_with_stdio(true); cin.tie(NULL);
#define fileIO  freopen("input.txt", "r", stdin); \
                             freopen("output.txt", "w", stdout);

int binary_search(long long int A[], int n, int x){
    int left,right,idx,mid;
    left = 1; right = n; idx = -1;
 
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (A[mid] < x)
            {
                left = mid + 1;
            }
            else if (A[mid] >= x)
            {
                idx = mid;
                right = mid - 1;
            }
            else
            {
                idx = mid;
                
                left = mid + 1;
            }
        }
    return idx;
}

void solve(){
    int n,q; cin>>n>>q;
    int ara[n],que[q];

    for(int i=0; i<n; i++) cin>>ara[i];
    for(int i=0; i<q; i++) cin>>que[i];

    sort(ara, ara+n, greater<int>());
    ll sum[n+1];
    sum[0] = 0;
    for(int i=1; i<=n; i++){
        sum[i] = sum[i-1] + ara[i-1];
    }

    for(int i=0; i<q; i++){
        int x = binary_search(sum, n, que[i]);
        if(x==-1) cout<<"-1\n";
        else cout<<x<<endl;
    }



    return;
}


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


