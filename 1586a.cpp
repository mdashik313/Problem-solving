#include <bits/stdc++.h>
using namespace std;

#define mod							1000000007;
#define ll							long long
#define pi							acos(-1)
#define setzero(a)				    memset(a,0,sizeof(a))
#define pb(a)						push_back(a)

bool A[20001];
void sieve(){
    memset(A, true, sizeof(A));
    for(int p = 2; p*p <= 20000; p++){
        if(A[p] == true) {
            for(int i = p*2; i <= 20000; i += p){
                A[i] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(true); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t; 
    long long n;
    
    sieve();

    scanf("%d", &t);
    while(t--) {
        scanf("%lld", &n);
        int ara[n],sum=0;
        for(int i=0; i<n; i++) {
            scanf("%d", &ara[i]);
            sum += ara[i];
        }     
        bool f;
        int id;
        if(A[sum] == false) f = true;
        else f = false;

        if(f==true) {
            cout<<n<<"\n";
            for(int i=1; i<n; i++) cout<<i<<" ";
            cout<<n<<"\n";
        } 
        else {
            cout<<n-1<<"\n";
            for(int i=0; i<n; i++){
                if(ara[i] % 2 == 1) {
                    id = i+1; break;
                }
            }
            for(int i=1; i<=n; i++){
                if(i != id) {
                    cout<<i;
                    if(i<n) cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
    
    return 0;
}
