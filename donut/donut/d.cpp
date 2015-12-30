#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <deque>
#include <complex>
#include <stack>
#include <queue>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <ctime>
#include <iterator>
#include <bitset>
#include <numeric>
#include <list>
#include <iomanip>

#if __cplusplus >= 201103L
#include <array>
#include <tuple>
#include <initializer_list>
#include <unordered_set>
#include <unordered_map>
#include <forward_list>

#define cauto const auto&
#define ALL(v) begin(v),end(v)
#else
#define ALL(v) (v).begin(),(v).end()
#endif

using namespace std;

namespace{
	typedef long long LL;
	typedef pair<int, int> pii;
	typedef pair<LL, LL> pll;

	typedef vector<int> vint;
	typedef vector<vector<int> > vvint;
	typedef vector<long long> vll, vLL;
	typedef vector<vector<long long> > vvll, vvLL;

#define VV(T) vector<vector< T > >

	template <class T>
	void initvv(vector<vector<T> > &v, int a, int b, const T &t = T()){
		v.assign(a, vector<T>(b, t));
	}

	template <class F, class T>
	void convert(const F &f, T &t){
		stringstream ss;
		ss << f;
		ss >> t;
	}


#define REP(i,n) for(int i=0;i<int(n);++i)
#define RALL(v) (v).rbegin(),(v).rend()


#define MOD 1000000007LL
#define EPS 1e-8

	int ex[1 << 18];
	int sum[512];
	int cnt[512];
	void insert(int x){
		int y = x >> 9;
		++cnt[y];
		sum[y] += x;
		++ex[x];
	}
	void erase(int x){
		int y = x >> 9;
		--cnt[y];
		sum[y] -= x;
		--ex[x];
	}

	void mainmain(){
		int n, m;
		scanf("%d%d", &n, &m);
		vint cs0(n);
		for (int i = 0; i < n; ++i){
			scanf("%d", &cs0[i]);
		}
		set<int> cs(ALL(cs0));
		{
			auto it = cs.begin();
			auto it2 = it;
			++it2;
			while (it2 != cs.end()){
				insert(*it2 - *it);
				it = it2;
				++it2;
			}
		}

		int q;
		scanf("%d", &q);
		for (int zzz = 0; zzz <= q; ++zzz){
			int ans = 0;
			int ch = n - m - zzz;
			int k;
			for (k = 0; ch && ch >= cnt[k]; ++k){
				ans += sum[k];
				ch -= cnt[k];
			}
			k <<= 9;
			for (; ch > 0; ++k){
				int t = min(ch, ex[k]);
				ans += k * t;
				ch -= t;
			}
			printf("%d\n", ans);

			if (zzz != q){
				int d;
				scanf("%d", &d);
				int c = cs0[d - 1];
				auto it = cs.find(c);
				auto it2 = it;
				++it2;
				int a = -1, b = -1;
				if (it2 != cs.end()){
					b = *it2;
					erase(b - c);
				}
				it2 = it;
				if (it != cs.begin()){
					--it2;
					a = *it2;
					erase(c - a);
				}
				if (a != -1 && b != -1){
					insert(b - a);
				}
				cs.erase(it);
			}
		}
	}



}

class D{
int main() try{
	//	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);
	cerr << fixed << setprecision(4);
	mainmain();
}
catch (...){}
};