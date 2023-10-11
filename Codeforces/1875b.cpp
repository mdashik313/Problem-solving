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

void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<ll> a(n),b(m);
    cinn(a);
    cinn(b);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll res=0,sum1=0,sum2=0;
    for(auto& i:a) sum1+=i;
    for(auto& i:b) sum2+=i;

    if(k==1){
        if(b[m-1]>a[0]){
            for(int i=1;i<n;i++) res+=a[i];
            res+=b[m-1];
        }
        else res = sum1;
        cout<<res;nl;
    }

    else if(k==2){
        if(b[m-1]>a[0]){
            swap(b[m-1],a[0]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        }
        if(a[n-1]>b[0]){
            swap(a[n-1],b[0]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        }
        
        for(int i=0;i<n;i++) res+=a[i];
        cout<<res;nl;
    }

    else if(k%2==1){
       
        if(b[m-1]>a[0]){
            swap(b[m-1],a[0]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        }
        if(a[n-1]>b[0]){
            swap(a[n-1],b[0]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        }
        if(b[m-1]>a[0]){
            swap(b[m-1],a[0]);
        }
        for(int i=0;i<n;i++) res+=a[i];
        cout<<res;nl;
        
    }
    else {
        if(b[m-1]>a[0]){
            swap(b[m-1],a[0]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        }
        if(a[n-1]>b[0]){
            swap(a[n-1],b[0]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
        }
        
        for(int i=0;i<n;i++) res+=a[i];
        cout<<res;nl;
        
    }
    
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




