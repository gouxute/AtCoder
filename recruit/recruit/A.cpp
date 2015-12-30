#include<iostream>
#include<cmath>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
#define INF 1000000007
class A{
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int e = c / a;
	int f = d / b;
	if (e >= f)
		cout << f<<endl;
	else
	{
		cout << e<<endl;
	}


}
};