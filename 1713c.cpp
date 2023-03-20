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

int powerOf(int ara[],int n){
    if(n%2==1 || n==2) return 0;
    while(n > 1){
        if(n%2!=0) return 0;
        n /= 2;
    }
    return 1;
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

void solve(){
    int n,m,last;
    ll pow[500000];
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++) ara[i]=i;

    for(m=0; m*m<=100000; m++){
        pow[m]=m*m;
    }
    
    for(int i=n-1; i>0; i--){

        int r = sqrt(ara[i]+i);
        int l = sqrt(ara[i]);
        
        if(l*l==ara[i]){
            if(ara[0]==0){
                swap(ara[i],ara[0]);
            }
            else {
                int idx = upper_bound(pow, pow + m, ara[i]) - pow;
                int x = pow[idx];
                int d = x - ara[i];
                
                swap(ara[i], ara[d]);
                
            }
            
        }
        else {
            int idx = upper_bound(pow, pow + m, ara[i]) - pow;
            int x = pow[idx];
            int d = x - ara[i];

            swap(ara[i], ara[d]);
        }

        // if(!(r*r==ara[i]+i)){
        //     int idx = upper_bound(pow,pow+m,ara[i]) - pow;
        //     int x = pow[idx];
        //     int d = x - ara[i];
        //     if(ara[i]!=1){
        //         swap(ara[i],ara[d]);
        //     }
        //     else {
        //         ara[0]=1; ara[1]=0; break;
        //     }
        // }

        
    }
    
    for(int i=0; i<n; i++) cout<<ara[i]<<" ";
    cout<<endl;

    return;
}
