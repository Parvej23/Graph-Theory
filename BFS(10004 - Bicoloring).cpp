///https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945
/// Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define Fon(i,a,b) for(int i=1;i<=n;i++)
#define fon(i,n) for(int i=0;i<n;i++)
#define lcm(a,b) (a/__gcd(a,b)*b)
#define gcd(a,b)  __gcd(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define mem(a,b) memset(a, b, sizeof(a) )
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define bye return 0
#define FASTER_CODE ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int mx = 300;
vector<int> adj[mx];
int col[mx];

bool isBicolor ( int s )
{
    mem ( col, -1 );

    col[s] = 1;
    queue<int> q;
    q.push( s );

    while ( !q.empty() )
    {
        int u = q.front();
        q.pop();

        int curCol;
        if ( col[u] == 1 ) curCol = 2;
        else curCol = 1;

        for ( auto v : adj[u] )
        {
            if ( col[v] == -1 )
            {
                col[v] = curCol;
                q.push( v );
            }
            else if ( col[v] == col[u] ) return 0;
        }
    }

    return 1;
}

int main()
{
    FASTER_CODE

    int n;
    while ( cin >> n )
    {
        if (  n == 0 ) break;
        for ( int i = 0; i < mx; i++ ) adj[i].clear();
        int m;
        cin >> m;
        for ( int i = 1; i <= m; i++ )
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back ( v );
            adj[v].push_back ( u );
        }

        if ( isBicolor( 0 ) == 1 ) cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";

    }

    return 0;
}
