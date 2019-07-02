#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#define maxn 1010
#define ll long long
#define endl '\n'
using namespace std;

ll a[maxn][maxn];

ll dp[maxn][maxn];

ll n;

int dpi(int r , int c)
{
	if(r == n && c == n)
	{
		return a[r][c];
	}

	int ans = 1e9;

	if(c + 1 <= n)
	{
		ans = min(ans , dpi(r , c + 1));
	}

	if(r + 1 <= n)
	{
		ans = min(ans , dpi(r + 1, c));
	}

	ans += a[r][c];

	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	if(fopen("InputArturoK.txt" , "r")) freopen("InputArturoK.txt" , "r" , stdin);

	cin >> n;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}

	for(int j = 1; j <= n; j++)
	{
		dp[1][j] = dp[1][j - 1] + a[1][j];

		dp[j][1] = dp[j - 1][1] + a[j][1];
	}

	for(int i = 2; i <= n; i++)
	{
		for(int j = 2; j <= n; j++)
		{
			dp[i][j] = min(dp[i - 1][j] , dp[i][j - 1]) + a[i][j];
		}
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << dp[i][j] << " ";
		}

		cout << endl;
	}

	cout << dp[n][n] << endl;

	return 0;
}
