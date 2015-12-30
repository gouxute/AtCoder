#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
#define INF 1000000007
class A2{
	int N;
	int main(){
		cin >> N;
		if ((N - 1) / 20 % 2 != 0)
			cout << 20 - (N - 1) % 20 << endl;
		else
			cout << (N - 1) % 20 + 1 << endl;
	}
};