#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class E{
string s[5000];
string t[5000];
int q;
int main(){
	cin >> q;
	REP(i, q){
		cin >> s[i] >> t[i];

	}
	REP(i, q){
		int i1 = 0, i2, j = 0;

		while (j <= s[i].length() - 1 && !s[i].empty()){
			int jj = j;
			int k = 0;
			for (k = 0; k <= t[i].length() - 1;k++){
				if (j<= s[i].length() - 1 && !s[i].empty())
			if (s[i].at(j) == t[i].at(k))
			{
				j++;
				k = 0;
			}
			}
			if (jj == j)
			{
				s[i].erase(s[i].begin() + j);
				
				
			}
		
		}
		int ttt = 0;
		if (s[i].find(t[i]) == string::npos)
			cout << "NO" << endl;
		else
		{
			cout << "YES" << endl;
		}

	}

	return 0;

}
};