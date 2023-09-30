#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();
vector<long long> sieve(long long MAXP);
bool palindrome(string &s);

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

#define cinn(a) for(int i=0;i<a.size();i++) cin>>a[i]
#define printa(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" ";nl
#define lop(size) for(int i=0;i<size;i++)


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
    int n; cin>>n;

    vector<ll> a(n),b(n);
    cinn(a);
    cinn(b);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll sumA=0,sumB=0,res1,res2;
    for(int i=0;i<n;i++){
        sumA+=a[i]; sumB+=b[i];
    }

    res1 = sumA+(n*(b[0]));
    res2 = sumB+(n*(a[0]));
    
    cout<<(ll)min(res1,res2); nl;

    return;
}

bool palindrome(string &s){
    int len = s.size()/2;
    for(int i=0,j=s.size()-1;i<len;i++,j--){
        if(s[i]!=s[j])
            return false;
    }
    return true;
}

vector<long long> sieve(long long MAXP){
    vector<ll> res;
    vector<bool> mem(MAXP,1);
    mem[1]=0;
    //get all prime numbers upto MAXP
    for(int i=2;i<MAXP;i++){
        if(mem[i]==1){
            res.push_back(i);
            for(int j=i;j<MAXP;j+=i) {mem[j]=0;}
        }
    }
    return res;
}




