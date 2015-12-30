#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class E{
int N;
int a[100];
int x;
int main(){
	cin >> N;
	REP(i, N){
		cin >> a[i];
	}
	cin >> x;
	if (x >= a[N - 1])
		cout << N + 1 << endl;
	else
	REP(i,N)
	if (x <= a[i])
	{
		cout << i+1 << endl;
		break;
	}
	
	return 0;
}
};