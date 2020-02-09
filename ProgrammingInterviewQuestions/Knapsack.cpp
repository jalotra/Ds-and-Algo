/******************************************
* AUTHOR : GEEOTHERMAL/CODEFORCES
  USED BY : Shivam Jalotra
  COLLEGE : Nit Kurukshetra
******************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
 
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
#define FOR(i, a, b) for(int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001; //check the limits, dummy

// Function Declaration
long long int Knapsack(int wt[], int v[], int W, int n);
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);    

	// Dynamic Programming
	// SO we are given a int wt[] and a int value[] and a max weight that the knapsack can hold  
	// We have to maximize the total value of knapsack also the weights has to be taken in
	// such as the total sum of the weights is less than W

	// Inputs are wt[], v[], W(total_weight), n 
	int N,W;
	cin >> N >> W;
	int v[N];
	int wt[W];

	FOR(i,0,N)
	{
		cin>> wt[i] >> v[i]; 
	}
	cout << Knapsack(wt, v, W, N);
	
	return 0;
}

long long int Knapsack(int wt[], int v[], int W, int n)
{
	
	long long K[n+1][W+1] ;
	// Base case 
	// k[n][0] = 0
	// k[0][w] = 0

	// FOR(i,0,n+1)
	// {
	// 	FOR(j,0,W+1)
	// 	{
	// 		K[i][j] = 0;
	// 	}
	// }

	// Now building the matrix in bottom up manner
	FOR(i,0,n+1)
	{
		FOR(w,0,W+1)
		{
			if(i == 0 || w == 0)
			{
				K[i][w] = 0;
			}
			else if(wt[i-1] <= w)
			{
				K[i][w] = max(v[i-1]+ K[i-1][w-wt[i-1]], K[i-1][w]);
			}
			else
			{
				K[i][w] = K[i-1][w];
						}
		}
	}


	return K[n][W];
}