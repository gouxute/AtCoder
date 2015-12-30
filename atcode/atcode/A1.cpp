#include<iostream>
#include<iomanip> 
using namespace std;
class A1{
int N;
double sum;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
#define INF 1000000007
int a[100010];
int main(){
	cin >> N;
	cin >> a[0];
	FOR(i,1, N){
		cin >> a[i];
		sum += a[i]-a[i-1];
	}
	cout << setprecision(8) << setiosflags(ios::fixed) << sum / (N - 1) << endl;
	return 0;


}
};