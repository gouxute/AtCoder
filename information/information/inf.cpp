#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
double a, b, c = 0, d = 1, e;
char se[] = { 'A', 'C', 'B', 'B', 'B', 'A', 'C', 'B', 'A', 'C', 'B', 'B', 'B', 'A', 'C', 'B', 'B', 'B', 'B', 'A', 'C', 'B', 'B', 'B', 'B', 'A', 'B', 'A', 'C', 'B', 'B', 'B', 'A', 'C', 'B' ,
'A', 'C', 'B', 'B', 'B', 'B', 'A',  'B', 'A', 'C', 'B', 'B', 'B', 'A', 'C', 'B', 'B', 'B', 'B', 'A', 'C', 'B', 'B', 'B', 'B', 'A', 'B', 'A', 'C', 'B', 'B', 'B', 'A', 'C', 'B' };
int re[1000];
int cvb(double b1){
	int i = 1;
	while (1){
		if (b1 != 0)
			b1 = b1 * 2;
		else
			break;
		if (b1 >= 1)
		{
			b1 -= 1;
			re[i] = 1;
		}

		i++;
	}
	return i;
}
int main(){
	cout << "Sequence: ";
	cout << se <<endl;
	cout << "Input the number of r.v (less than 70):   ";
	while (cin >> a){
		int num = sizeof(se) / sizeof(se[0]);
		b = 1;
		if (a > num)
		{		cout << "too big , less than 70";
				continue;
			}
	REP(i, a){
		if (se[i] == 'C')
			d = (d - c)* 0.6 + c;
		else if (se[i] == 'B')
		{
			c = c + (d - c)*0.6;
			d = c + (d - c)*0.9;
		}
		else
			c = c + (d - c)*0.9;
	}
	cout << "Arithmetic Coding:";
	int k = cvb((c+d)/2);
	REP(i, k)
		cout << re[i] << ' ';
	cout << endl;
	cout << "code length:  "<<k<<endl;
	
	cout << "----------------------**********--------------------";
	cout << endl << endl;
	cout << "Input the number of r.v (less than 70):   ";
	REP(i, 1000)
		re[i] = 0;

	}
}