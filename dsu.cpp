#include<bits/stdc++.h>

using namespace std;
#define ll  long long
void init()
{
    #ifndef ONLINE_JUDGE
    freopen("/home/odysseus/Documents/codes/in.txt", "r", stdin);
    freopen("/home/odysseus/Documents/codes/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
///Porer(val,pow)
/*
ll md=LLONG_MAX;
ll power(ll val,ll pw)
{
    if(pw==0)return 1;
    if(pw%2==0)
    {
        ll tmp=power(val,pw/2)%md;
        return (tmp*tmp)%md;
    }
    else return (val*power(val,pw-1))%md;
}
*/
/// DSU

ll par[300005],mx[300005],noe[300005];
ll parent(ll nd)
{
    if(par[nd]==nd)return nd;
    return parent(par[nd]);
}
void connect(ll u,ll v)
{
    ll pu=parent(u),pv=parent(v);
    if(pu==pv)return ;
    if(pu<pv)
    {
        mx[pu]=max(mx[pu],mx[pv]);
        par[pv]=par[pu];
        noe[pu]+=noe[pv];
    }
    else
    {
        mx[pv]=max(mx[pu],mx[pv]);
        par[pu]=par[pv];
        noe[pv]+=noe[pu];
    }
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        string s;
        cin>>s;
        if(s=="join")
        {
            ll x,y;
            cin>>x>>y;
            if(parent(x)!=parent(y))
            {

            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    init();
    ll t=1,cs=0;
    cin>>t;
    while(t--)
    {
        ///cout<<"Case "<<++cs<<": ";
        solve();
    }


    return 0;
}








