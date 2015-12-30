#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
#include<numeric>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
int v[4];
int x[101][5];
int cn[4];
int N;
int out[4];
int main(){
	cn[0] = 500;
	cn[1] = 100;
	cn[2] = 50;
	cn[3] = 10;
	REP(i, 4)
		cin >> v[i];
	cin >> N;
	REP(i, N){
		REP(j, 5)
			cin >> x[i][j];
		REP(i1,4)
			v[i1] += x[i][i1+1];
		int pt = 0;
		REP(i1, 4)
			pt = pt + cn[i1] * x[i][i1 + 1];
		pt -= x[i][0];
		//-----------
		REP(i1, 4){
			out[i1] = 0;
		}
		int total = 0;
		REP(i1, 4){
			total = 0;
			/*if (pt == 0 && out[i1 - 1]>0 && i1 <= 2){
				if (out[i1 - 1] > 0)
				{
					pt += cn[i1 - 1];
					out[i1 - 1]--;
				}
				else if (out[i1 - 2] > 0)
				{
					pt += cn[i1 - 2];
					out[i1 - 2]--;
				}


			}*/

			if ((pt == 0  && out[2]!=0&&i1 == 3&&(out[0]+out[1]>0))
				|| (pt != 0 && out[2] == 0 && i1 == 3 && (out[0] + out[1]>0))
				){
				int ii1 = 0;
				if (out[i1 - 1] > 0)
				{
					pt += cn[i1 - 1];
					out[i1 - 1]--;
					v[i1 - 1]++;
				}

				if (out[i1 - 1] == 0 && out[i1 - 2] > 0)
				{
					pt += cn[i1 - 2];
					out[i1 - 2]--;
					v[i1 - 2]++;
					ii1 = i1 - 1;
				}
				if (out[i1 - 1] == 0 && out[i1 - 2] == 0 && out[i1 - 3] > 0)
				{
					pt += cn[i1 - 3];
					out[i1 - 3]--;
					v[i1 - 3]++;
					ii1 = i1 - 2;
				}
				i1 = ii1;

			}
			int ct = 0;
			while (total <= pt&&ct < v[i1]){

				total += cn[i1];
				ct++;

			}
			if (total > pt)
			{
				total -= cn[i1];
				pt -= total;
				ct--;
				out[i1] = ct;
			}
			else
			{
				pt -= total;

				out[i1] = ct;
			}
			v[i1] -= out[i1];
		}
		if (pt != 0 )
		{
			cout << "impossible" << endl;
			REP(i2, 4){
				v[i2] += out[i2];
				v[i2] -= x[i][i2 + 1];
			}
			
		}
		if (pt == 0){

			if ((out[2] == 0&&out[3]!=0&&(out[0]+out[1]>0))||
				(out[2] != 0 && out[3] == 0 && (out[0] + out[1]>0))
				){
				cout << "impossible" << endl;
				REP(i2, 4){
					v[i2] += out[i2];
					v[i2] -= x[i][i2 + 1];
				}
			}
			else{
			REP(i2, 3)
				cout << out[i2] << " ";
			cout << out[3];
			cout << endl;
			}


		}


	}

	return 0;

}

