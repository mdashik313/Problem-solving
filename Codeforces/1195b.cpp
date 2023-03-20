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
    
    ll step, candy;
    cin>>step>>candy;

    ll left=0,right=step, sol, ans;
    
    while(left <= right){
        ll mid = left + (right-left)/2;
        ll a = (mid*(mid+1))/2;
        ll b = step - mid;
        if((a-b)==candy) {
            sol = b;
            break;
        }
        else if(candy > a-b) left = mid + 1;
        else right = mid - 1;
    }
    cout<<sol<<"\n";

    return 0;
}
