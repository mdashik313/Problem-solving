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
    int a1,b1; cin>>a1>>b1;
    vector<int> a(a1), b(b1), temp_a;
    cinn(a);
    cinn(b);
    
    int or_=0;
    for(int i=0;i<b1;i++) or_ |= b[i];    
    
    temp_a = a;
    for(int i=0;i<a1;i++){
        temp_a[i] = (temp_a[i] | or_);
    }

    int highest=temp_a[0];
    for(int i=1;i<a1;i++){
        highest = (highest ^ temp_a[i]);
    }

    int lowest=a[0];
    for(int i=1;i<a1;i++){
        lowest = (lowest ^ a[i]);
    }
    
    if(a1%2==0){
        cout<<highest<<" "<<lowest; nl;
    }
    else{
        cout<<lowest<<" "<<highest; nl;
    }
    return;
}



