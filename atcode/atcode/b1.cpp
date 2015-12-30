#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
#define INF 1000000007

class b1{
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
		
		sec[s[i]]++;
		sec[t[i]+1]--;
	}
	FOR(i, 1, N + 1){
		sec[i] += sec[i - 1];
	}
	FOR(i, 1, N + 1){
		cum[i] += cum[i - 1] + sec[i];
	}
	bool ck = false;
	int cnt = 0;
	FOR(i, 0, M){
		if (cum[t[i]] - cum[s[i] - 1] >= 2 * (t[i] - s[i] + 1)){
			{ if (cum[t[i]] - cum[s[i] - 1] >= 3 * (t[i] - s[i] + 1))
			{
				ck = true;
				break;
			}
			ans[cnt] = i + 1;
			cnt++;
			}
		}}
	
	if (ck)
	{
		FOR(i, 0, M){
			ans[i] = 0;
		}
		cnt = 0;
		FOR(i, 0, M){
			if (cum[t[i]] - cum[s[i] - 1] >= 3 * (t[i] - s[i] + 1))
			{
				ans[cnt] = i + 1;
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	REP(i, cnt)
		cout << ans[i] << endl;
	return 0;
}
};