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
        ll a, b;
        string s1, s2;
        cin>>s1>>a;
        cin>>s2>>b;
        
        ll x,y;
        x = s1.length(); y = s2.length();

        ll c1 = stoi(s1),c2 = stoi(s2);
        ll var1 = labs(x-y);
        ll dig1 = x + a, dig2 = y + b;

        if(dig1 < dig2) cout<<"<\n";
        else if(dig1 > dig2) cout<<">\n";
        else {

        if(x > y){
            if(a > 0) c1 *= 10;
            if(b >= var1+1) c2 *= (ll) pow(10,var1) * 10;
            else c2 *= (ll) pow(10,var1);
        }
        else if( y > x){
            if(b > 0) c2 *= 10;
            if(a >= var1+1) c1 *= (ll) pow(10,var1) * 10;
            else c1 *= (ll) pow(10,var1);
        }

        if(c1==c2) cout<<"=\n";
        else if(c1 < c2) cout<<"<\n";
        else cout<<">\n";

        }
        
    }
    
    return 0;
}
