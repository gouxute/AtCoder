#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class D{
long long int N;
long long int L;
int x[100010];
int a[100010];
int sum;
int main(){
	cin >> N >> L;
	REP(i, N){
		if (i ==0)
		cin >> x[i] >> a[i];
		else
		{
			int t;
			cin >> t >> a[i];
			x[i] = t - x[i - 1];
			sum = sum + x[i];
		}
	}
	x[0] = L - sum;

	REP(i, N){
		int dis = 0;
		int q = 0; int h = 0;
		
		
		FOR(j, i + 1, N){
			FOR(k, i + 1, j)
				q = q + x[k];
			q = q*a[j];
			FOR(k, j+1, N)
				h = h + x[k];
			FOR(k, 0, i)
				h = h + x[k];
			h = h*a[j];
			if (q > h)
				cout << q << endl;
			else
				cout << h << endl;
			}

		FOR(j, 0, i){

			FOR(k, i + 1, j)
				q = q + x[k];
			q = q*a[j];
			FOR(k, j + 1, N)
				h = h + x[k];
			FOR(k, j+1, i)
				q = q + x[k];
			q = q*a[j];
			if (q > h)
				cout << q << endl;
			else
				cout << h << endl;
		}





	}



}
};