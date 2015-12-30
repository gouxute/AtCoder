#include<iostream>
using namespace std;
char num[8];
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,m,n) for(int i=m;i<=(int)n-1;i++)

void out(int n, int N){
	for (int i = 0; i <= 9; i++){
		if (n < N) out(n + 1, N);
		puts(num);
		if (i<9)
		if (++num[n]>'9')
			num[n] = '0';
	}

}

int main(){
	int N;
	cin >> N;
	REP(i, N){
		num[i] = '0';
	}
	num[N] = '\0';
	int t = 1;
	REP(i, N){
		t *= 10;
	}
	cout << t - 1 << endl;
	out(0, N-1);
}