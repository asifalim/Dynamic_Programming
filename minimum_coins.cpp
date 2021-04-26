#include<bits/stdc++.h>          //prbl_link--->https://cses.fi/problemset/task/1634/
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define dbg(a,b,c) cout<<a<<"  "<<b<<"  "<<c<<endl;
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define INF 1e9
#define w(t) cin>>t;while(t--)
#define kill(a) {cout<<a<<endl;continue;}
#define pi  2 * acos(0.0)
int t,ans=0,tot=0,k=0;
const int mxN=1e6,mod=1e9+7;
vector<int>dp;                  //minimum coins need to make some value
signed main()                  //suppose every coins is enough and allowed to take duplicate coins
{
    //fast;
    w(t)
    {
        int n,m,a,b,c,d,e,i,j=0,sm=0,sm1=0,cn=0,cn1=0,mx=INT_MIN,mn=INT_MAX;
        string s,ss,sr;dp.assign(mxN+3,INF);dp[0]=0;
        bool f=true,ff=false;
        cin>>n>>m;int ar[n+3];
        for(i=1;i<=n;i++)cin>>ar[i];
        for(i=1;i<=n;i++)for(j=1;j<=m;j++)if(j>=ar[i])dp[j]=min(dp[j],1+dp[j-ar[i]]);
        if(dp[m]==INF)cout<<-1<<endl;
        else cout<<dp[m]<<endl;
    }
    return 0;
}
