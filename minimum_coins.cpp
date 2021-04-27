#include<bits/stdc++.h>
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
const int mxN=1e6,mod=1e9+7;     //prbl_link---> https://cses.fi/problemset/task/1634/
vector<int>dp;                  //minimum coins need to make some value
signed main()                  //suppose every num of coins is enough
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
signed main()                  //prbl_link---> https://www.spoj.com/problems/CODEM5/
{                             //minimum coins need to make some value
    //fast;                  //every num of coins is just given the array  
    w(t)
    {
        ll n,m,a,b,c,d,e,i,j,k,sm=0,sm1=0,cn=0,cn1=0,mx=INT_MIN,mn=INT_MAX;
        string s,ss,sr;              
        bool f=true,ff=false;      
        cin>>n>>m;
        dp.assign(m+1,INF);
        int ar[n+3],v[m+1];
        v[0]=0;
        for(i=1; i<=n; i++)cin>>ar[i];
        for(i=1; i<=n; i++)
        {
            sm+=ar[i];
            for(k=1; k<=m; k++)v[k]=dp[k],vis[k]=0;
            for(j=ar[i]; j<=m; j++)
            {
                if(!vis[j-ar[i]])
                {
                    dp[j]=min(v[j],v[j-ar[i]]+1);
                    if(v[j]==INF)vis[j]=1;
                }
                else if(j>sm)break;
            }
        }
        if(dp[m]>=INF)cout<<"impossible"<<endl;
        else cout<<dp[m]<<endl;
    }
    return 0;
}
