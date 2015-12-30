#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
#include<numeric>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class dd{
	int N, K;
	int c[200000];
	int d[200000];
	int Q;
	int q[200000];
	int main(){
		cin >> N >> K;

		REP(i, N){
			cin >> c[i];
		}
		cin >> Q;
		REP(i, Q)
			cin >> q[i];
		sort(c, c + N);
		REP(i, N - 1){
			d[i] = c[i + 1] - c[i];
		}

		sort(d, d + N - 1);
		cout << accumulate(d, d + N - K, 0) << endl;




	}
};