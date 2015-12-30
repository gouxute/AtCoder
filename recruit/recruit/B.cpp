#include<iostream>
#include<cmath>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class B{
int N;
int K;
int t;
int t1;
int a[100010];
int main(){
	cin >> N >> K;
	
	int c = 1;
	int flag = false;
	REP(i, K)
	{
		cin >> t;
		c = c + t;
		if (c > N){
			t1 = N - c%N;
			c = t1;
		}
		
		else
		if (c == N){
			cout << "YES" << endl;
			cout << i+1 << endl;
			flag = true;
			break;
		}
		else
			t1 = c;
	}
	if (!flag)
	{
		cout << "NO"<<endl;
		cout << t1<<endl;
	}
	return 0;


}
};