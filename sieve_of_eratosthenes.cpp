#include "bits/stdc++.h"
#include "stdint.h"

using namespace std;

#define TEN3 1000
#define TEN4 10000
#define TEN5 100000
#define TEN6 1000000
#define TEN7 10000000
#define TEN8 100000000
#define TEN9 1000000000

#define MOD7 1000000007
#define MOD9 1000000009

#define pb push_back
#define mp make_pair

#define MM(a,x) memset(a, x, sizeof(a))
#define P(x) cout<<x<<endl;
#define P2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl;
#define PV(a,n) for(int i=0;i<n;i++) cout<<#a<<"[" << i <<"] = "<<a[i]<<endl;
#define TM(a,b) cout<<#a<<"->"<<#b<<": "<<1.*(b-a)/CLOCKS_PER_SEC<<"s\n";
#define all(X) (X).begin(), (X).end ()
//#define for_each(it, X) for (__typeof((X).begin()) it = (X).begin(); it != (X).end(); it++)
#define as(i,be,en) assert(i>=be&&i<=en);
#define fore(i, l, r) for(int i = (l); i < (r); ++i)
#define forn(i, n) fore(i, 0, n)
#define fori(i, l, r) fore(i, l, (r) + 1)
#define sz(v) long((v).size())
#define X first
#define Y second

typedef long long li;
typedef long double ld;
typedef unsigned long long LL;
typedef string st;
typedef pair<long, long> pt;

template<typename T> T abs(T a) { return a < 0 ? -a : a; }
template<typename T> T sqr(T a) { return a*a; }

const long INF = (long)1e9;
const ld EPS = 1e-9;
const ld PI = 3.1415926535897932384626433832795;


// end of constants and definitions........................................................

void sieve(int m,int n)
{
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for (int p=2; p*p<=n; p++)
    {       
        if (prime[p] == true)
        {
            for (int i=m-m%p; i<=n; i += p) // only checks numbers between m and n // still to be understood
            { 
            	if (i>=m && prime[i] && i!=p)
                prime[i] = false;
            }
        }
    }
    if(m==1)m=2;
    for (int i = m; i <=n; ++i)
    {
    	if(prime[i])
    	{
    		cout << i << endl;
    	}
    }
}



//main
int main(int argc, char const *argv[])
{
	cout << "Enter Begining Number of Sieve: ";
    int m,n; 
    cin >> m;
    cout << "Enter Ending Number of Sieve: ";
    cin >> n;
    sieve(m,n);
	return 0;
}