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
    map<char,int>mp;

    scanf("%d", &t);
    while(t--) {
        string s,text;
        cin>>s>>text;
        int sum=0;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]] = i+1;
        }
        for(int i=0; i<text.size()-1; i++) {
            sum += abs(mp[text[i]]-mp[text[i+1]]);
        }
        cout<<sum<<"\n";   
    }    
    return 0;
}
