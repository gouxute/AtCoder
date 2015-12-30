#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class B{
long long int a[4];
long long int c;
long long int b[4];
long long int re[4];
long long int cc;
	bool t1, t2;
	int cmp(const void * a, const void * b)
	{
		return (*(int*)a - *(int*)b);
	}
	int main(){
		REP(i, 4)
			cin >> a[i];
		cin >> c;
		REP(i, 4)
			b[i] = -1;

		int s = -1;
		REP(i, 4)
		if (c == a[i])
		{
			b[cc] = i;
			if (s == -1)
			if (i > 1)
				s = 1;
			else
				s = 0;
			cc++;
		}

		REP(i, 4){
			if (b[i] <= 1 && b[i] != -1)
				t1 = true;
			if (b[i] > 1)
				t2 = true;
		}
		if (t1&!t2)
		{
			re[0] = a[2];
			re[1] = a[3];
		}
		if (!t1&t2)
		{
			re[0] = a[0];
			re[1] = a[1];
		}
		if (t1&t2)
		{
			
			re[0] = a[2];
			re[1] = a[0];
			re[2] = a[3];
			re[3] = a[1];
			
		}


		int t;
		REP(i, 3)
		{
			t = re[i];
			FOR(j, i + 1, 4)
			{
				if (t == re[j])
					re[j] = 0;
			}
		}
		cc = 0;

		REP(i, 4)
		if (re[i] != 0)
			++cc;
		cout << cc << endl;
		//std::qsort(re, cc,sizeof(int),cmp);
		REP(i, 4)
		if (re[i] != 0)
			cout << re[i] << endl;
		return 0;
	}
};