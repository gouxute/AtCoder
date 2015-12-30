#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
#include<numeric>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class b{
struct s{

	long long  a;
	long long b;
} s1[50];
int n, x, y;
int bb[50];
bool kk;
int cnt;
int cmp(const s a, const s b)
{
	
		return a.b > b.b ;
	
}
int cmp1(const s a, const s b)
{

	return a.a+a.b > b.a+b.b;

}
int main(){
	kk = true;
	cin >> n >> x >> y;
	REP(i, n){
		cin >> s1[i].a>>s1[i].b;
		bb[i] = s1[i].b;
	}
	long long t1 = accumulate(bb, bb + n, 0);;//
//	if (t1 >= y)
//		cout << -1 << endl;
	sort(s1, s1 + n, cmp);
	long long t2 = 0; //y
	t1 = 0;//x;
	
	REP(i, n){
		t2 += s1[i].b;
		t1 += s1[i].a;
		cnt++;
		if (t2 >= y)
			break;
	}
	if (t2 < y)
	{
		cout << -1 << endl;
		return 0;
	}
	s s2[50];
	t1 += t2 - y;
	if (t1 >= x)
	{
		cout << cnt << endl;
		return 0;
		
	}
	else
	{
		REP(i, n - cnt){
			s2[i].a = s1[i + cnt].a;
			s2[i].b = s1[i + cnt].b;
		}
		sort(s2, s2 + n - cnt, cmp1);
		REP(i, n - cnt){
			t1 = t1 + s2[i].a+s2[i].b;
			cnt++;
			if (t1 >= x)
			{
				cout << cnt << endl;
				return 0;
			}
		}
	}
	cout <<-1 << endl;

}
};