#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
long long int A;
long long int B;
long long int C;
class a1{
int main(){
	cin >> A;
	cin >> B;
	C = C + abs(A);
	C += abs(B - A);
	C += abs(B);
	cout << C << endl;


}
};