
// Binary search with iterative approach


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
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
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

int FirstOccurence(vector<int> A, int n, int value)
{
	int high = n-1; int low = 0;
	int result = -1;
	while(low <= high)
	{
		int mid = low + (high-low)/2;
		// Base condition
		if(A[mid] == value)
		{
			result = mid;
			// high = mid-1;             // TO find the first occurence

			high= mid-1;              // To find the last occurence
			
			// Also you can just return the int (last_occurence - first_occurence)
			// to count the number of times a particular element has occured in the array
		}
		else if(value < A[mid])
		{
			high = mid -1;
		}
		else
		{
			low = mid + 1 ;
		}

}
return result;
}

int LastOccurence(vector<int> A, int n, int value)
{
	int high = n-1; int low = 0;
	int result = -1;
	while(low <= high)
	{
		int mid = low + (high-low)/2;
		// Base condition
		if(A[mid] == value)
		{
			result = mid;
			// high = mid-1;             // TO find the first occurence

			low = mid+1;              // To find the last occurence
			
			// Also you can just return the int (last_occurence - first_occurence)
			// to count the number of times a particular element has occured in the array
		}
		else if(value < A[mid])
		{
			high = mid -1;
		}
		else
		{
			low = mid + 1 ;
		}

}
return result;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	vector<int> array = {1 ,2 ,2, 3 ,3 ,4 ,4 ,5 ,5 ,5 ,5, 5,6 ,6, 6, 8 ,9 };
	int first_result = FirstOccurence(array, array.size(), 9);
	int last_result = LastOccurence(array, array.size(), 9);
	cout << last_result - first_result +1 <<endl; 
	
	return 0;
}