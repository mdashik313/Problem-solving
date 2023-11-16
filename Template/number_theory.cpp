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
    return 0;
}

int binary_to_decimal(string s){
    int res=0,p=s.size()-1;
    for(int i=0;i<s.size();i++){
        int digit=s[i]-48;
        res += (digit*pow(2,p));
        p--;
    }
    return res;
}
string decimal_to_binary(int n){
    if(n==0)
        return "0";
    string s="";
    while(n!=0){
        bool lsb = n & 1;
        s += to_string(lsb);
        n = n >> 1;
    }
    reverse(s.begin(),s.end());
    return s;
}

int number_of_zeros_inN(int n){
    int count=0;
    while(n!=0){
        if(n&1) count++;
        n = n>>1;
    }
    return count;
}

int number_of_ones_inN(int n){
    int count=0;
    while(n!=0){
        if(!(n&1)) count++;
        n = n>>1;
    }
    return count;
}

bool palindrome(string &s){
    int len = s.size()/2;
    for(int i=0,j=s.size()-1;i<len;i++,j--){
        if(s[i]!=s[j])
            return false;
    }
    return true;
}

vector<bool> sieve(long long MAXP){
    vector<ll> res;
    vector<bool> mem(MAXP+1,1);
    mem[1]=0;
    for(int i=4;i<=MAXP;i+=2){
        mem[i]=0;
    }
    for(int i=3;i<=MAXP;i+=2){
        if(mem[i]==1){
            res.push_back(i);
            long long m = i*i;
            for(int j=i;m<=MAXP;) {
            	mem[m]=0;
            	j += 2;
            	m = i * j;
            }
        }
    }
    //return res for all primes upto MAXP
    //return mem for each index, value=1 prime, value=0 non prime upto MEXP
    return mem;
}




