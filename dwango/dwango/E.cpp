#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
int M, N;
struct A{
	int r[3][2];
	int bonder[3][2];
} a[1001];
A b[1000];
int main(){
	cin >> N >> M;
	input(a[1000].r[0], 0, 0);
	input(a[1000].r[1], N, 1);
	input(a[1000].r[2], N, N);

	REP(i, M)
	{
		int a1,b1,c1;
		cin >> a1;
		cin >> b1;
		cin >> c1;
		input(a[i].r[0], a1, b1);
		REP(j, i){
			int t = a[j].r[3][1] - a[j].r[3][0];
			
			if (a[i].r[0][0] <= a[j].r[1][0] && a[i].r[0][0] >= a[j].r[0][0]
				&& a[i].r[0][1] <= a[j].r[1][1] && a[i].r[0][1] >= a[j].r[2][1])
				if(a[i].r[0][0] - a[i].r[0][1] <= a[j].r[0][1] - a[j].r[0][0])
					b[i] = 

				
		}
	}
	
	


}
void input(int *a, int m, int n){
	a[0] = m;
	a[1] = n;
}