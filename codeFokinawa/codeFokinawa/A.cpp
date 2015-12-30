#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
#include<numeric>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class A{
int h, w, k;
int main(){
	cin >> h >> w >> k;
	if ((h + 1) / 2 * (w + 1) / 2 <= k)
		cout << "IMPOSSIBLE"<<endl;
	else{
		int cnt = 0;
		REP(i, h){
			if (i % 2 == 0)
			{
				REP(j, w){
					if (j % 2 == 0)
					{
						if (cnt < k)
						{
							cout << '#';
							cnt++;
						}
						else
						{
							cout << '.';
						}
					}
					else
						cout << '.';
				}
			}
			else
			{		
				REP(j, w){
					cout << '.';
				}
			}
			cout << endl;
		}

	}
	return 0;
}};