#include <bits/stdc++.h>
using namespace std;
/*prototypes*/
void solve();
vector<long long> sieve(long long MAXP);
bool sortBySec(const pair<int,int> &p1, const pair<int,int> &p2);
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2);

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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);

    for(auto &i: a) cin>>i;

    for(auto &i: a) {
        if(i>k){
            if(i%k==0) i=k;
            else i%=k;
        }
    }
    vector< pair<int,int>> m;

    for(int i=1;i<=n;i++){
        m.push_back(make_pair(a[i-1],i));
    }

    sort(m.begin(),m.end(),cmp);

    for(auto &i : m){
        cout<<i.second<<" ";
    }
    nl;


    return;
}

bool sortBySec(const pair<int,int> &p1, const pair<int,int> &p2){
    return p1.second>p2.second;
}
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2){

    if(p1.first==p2.first)
        return p1.second<p2.second;
    else 
        return p1.first>p2.first;
}
vector<long long> sieve(long long MAXP){
    vector<ll> res;
    vector<bool> mem(MAXP,1);
    mem[1]=0;
    for(int i=2;i<MAXP;i++){
        if(mem[i]==1){
            res.push_back(i);
            for(int j=i;j<MAXP;j+=i) {mem[j]=0;}
        }
    }
    return res;
}


