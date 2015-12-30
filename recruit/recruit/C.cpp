#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class c{
char a[300010];
long long int cnt, cnt1;
vector<char> ss;
int main(){
	cin >> a;
	long int tt;
	REP(i, 300010){
		if (a[i] == '\0')
		{
			tt = i - 1;
			break;
		}
	}

	REP(i, tt){
		
		cnt = 0;
		bool ck = true;
		REP(k, ss.size()){
			if (a[i] == ss[k])
				ck = false;
		}
		if (!ck)
			continue;

		char m = a[i];
		FOR(j,i+1, tt+1) {
			if (m == a[j]){
				cnt++;
			}
		}
		cnt++;
		if (cnt != 1){
		cnt1 += cnt*(cnt - 1) / 2;
		ss.push_back(a[i]);
		}
	}
	if (cnt1 == 0)
		cnt1 = tt*(tt + 1) / 2;
	else
	cnt1 = tt*(tt + 1) / 2 - cnt1+1 ;
	cout << cnt1<<endl;

}
};