#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
#define INF 1000000007

typedef long long ll;
typedef long double ld;
ll dy[4] = { -1, 1, 0, 0 };
ll dx[4] = { 0, 0, 1, -1 };
class b2{
int M, N;
int s[100010];
int ans[100010];

int t[100010];
int sec[300010];
int cum[300010];

int main(){

	cin >> N >> M;
	REP(i, M){
		cin >> s[i] >> t[i];
		s[i]--;
		t[i]--;
		sec[s[i]]++;
		sec[t[i] + 1]--;
	}
	FOR(i, 1, N + 1){
		sec[i] += sec[i - 1];
	}
	FOR(i, 1, N + 1){
		if (sec[i - 1] == 1) cum[i] = cum[i - 1] + sec[i - 1];
		else cum[i] += cum[i - 1];
	}
	bool ck = false;
	int cnt = 0;
	FOR(i, 0, M){
		if (cum[t[i] + 1] - cum[s[i]] == 0){
			ans[cnt] = i + 1;
			cnt++;
			
		}
	}

	cout << cnt << endl;
	REP(i, cnt)
		cout << ans[i] << endl;
	return 0;
}
};