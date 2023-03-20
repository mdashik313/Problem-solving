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
        string s,st1,st2;
        cin>>s;
        st1 = s;
        st2 = s;

        if(s[0] == s[s.length()-1]) cout<<"NO\n";
        else{
            char ch1 = s[0], ch2 = s[s.length()-1];
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == ch1) { 
                    st1[i] = '('; 
                    st2[i] = '(';
                }           
                else if (s[i] == ch2) { 
                    st1[i] = ')'; 
                    st2[i] = ')';
                }        
                else {
                    st1[i] = '(';  
                    st2[i] = ')';
                }     
            }
            int count=0;
            for(int i=0; i<st1.length(); i++){
                if(count < 0) break;
                if(st1[i] == '(') count++;
                else count--;
            }
            if(count==0) cout<<"YES\n";
            else {
                count = 0;
                for (int i = 0; i < st1.length(); i++)
                {
                    if (count < 0)
                        break;
                    if (st2[i] == '(')
                        count++;
                    else
                        count--;
                }
                if(count==0) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }

        
    }
    
    return 0;
}
