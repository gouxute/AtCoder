#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class C{
int N;
vector<int>h;
int main() {
	cin >> N;
	int tm;
	REP(i, N){
		cin >> tm;
		if (h.empty()){
			cout << 0 << endl;
		}
		else
		{
			if (i == 3)
				int ttt = 0;
			cout << h.size() << endl;
			if (!h.empty())
			{
				while (!h.empty()&&*(vector<int>::iterator)(h.end() - 1)
					<= tm){
				h.pop_back();
			}
		}
	}
		h.push_back(tm);
		
	}
}

};