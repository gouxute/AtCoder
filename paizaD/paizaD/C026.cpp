#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
#include<numeric>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class C026{
int n, s, p;
struct w{
	int id;
	int m;
	int s;
} ;
w w1[100];

int cmp(const w a, const w b)
{

	return a.m >= b.m;

}

int main(){
	cin >> n >> s >> p;
	REP(i, n){
		cin >> w1[i].m >> w1[i].s;
		w1[i].id = i;
	}

	//sort(w1, w1+n, cmp);
	int re[100];
	REP(i, 100)
		re[i] = -1;
	int cnt = 0;
	REP(i, n){
		if (w1[i].s >= s - p&&w1[i].s <= s + p)
		{

			if (re[0] != -1)
			{
				if (w1[i - 1].m == w1[i].m)
				{
					re[cnt] = w1[i].id;
					cnt++;
				}
				else
				{

					break;
				}
			}
			else
			{
				re[cnt] = w1[i].id;
				cnt++;
			}

			
		}

	}
	sort(re, re + cnt);
	if (re[0] == -1)
		cout << "not found" << endl;
	else
		cout << re[0]+1 << endl;


}
};