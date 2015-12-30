#include<iostream>
#include<cmath>
#include<vector>
#include<set>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)
class C{
int N, K;
int c[200000];
struct bb{
	
	int cp;
	int f;
	int l;
	int ht;//1 t
};
struct cc{
	int tp;
	int bo;
	int num;
	int cp;
};
bb bbb[200000];
cc ccc[200000];
set<int> dif;
vector <int> ci;
vector <int> cpp1;
vector<int> ii1;
vector<int> ii2;
int Q;
int main(){
	cin >> N >> K;
	REP(i, N){
		cin >> bbb[i].cp;
		ccc[i].tp = i;
		ccc[i].bo = i;
		ccc[i].num = 1;
		ci.push_back(i);
	}
	cin >> Q;
	int K1 = N;
	while (K1 > K){
		
		REP(i, ci.size() ){
			if (i == 2)
				int sww = 0;
			int i1 = 0; int cp1 = 200000;
			REP(j, ci.size()){

				if (ci[j] != i)
				{
				if (bbb[ccc[i].tp].cp >= bbb[ccc[ci[j]].bo].cp){
					if (cp1 >= bbb[ccc[i].tp].cp - bbb[ccc[ci[j]].bo].cp){
						cp1 = bbb[ccc[i].tp].cp - bbb[ccc[ci[j]].bo].cp;
						i1 = j;
					}
				}
				else
				if (bbb[ccc[i].bo].cp <= bbb[ccc[ci[j]].tp].cp)
				{
					if (cp1 >= bbb[ccc[ci[j]].bo].cp - bbb[ccc[i].tp].cp){
						cp1 = bbb[ccc[ci[j]].bo].cp - bbb[ccc[i].tp].cp;
						i1 = j;
					}
				}

				}
				}
						cpp1.push_back(cp1);
						ii1.push_back(i1);
						ii2.push_back(i);
					
			}

		int i11 = 0,i12=0; int cp11 = 200000;
		REP(j, cpp1.size() ){
			if (cp11 >= cpp1[j]){
				cp11 = cpp1[j];
				i11 = ii1[j];
				i12 = ii2[j];
			}
		}
		
		if (bbb[ccc[i11].tp].cp >= bbb[ccc[i12].bo].cp){
			
			ci.erase(ci.begin() + i12);
			bbb[ccc[i11].tp].f = ccc[i12].bo;
			bbb[ccc[i12].bo].l = ccc[i11].tp;
			ccc[i11].cp += bbb[ccc[i11].tp].cp - bbb[ccc[i12].bo].cp;
			ccc[i11].num++;
		}
		else
		if (bbb[ccc[i11].bo].cp <= bbb[ccc[i12].tp].cp)
		{
			ci.erase(ci.begin() + i11);
			bbb[ccc[i11].tp].f = ccc[i12].bo;
			bbb[ccc[i12].bo].l = ccc[i11].tp;
			ccc[i12].cp += bbb[ccc[i12].tp].cp- bbb[ccc[i11].bo].cp  ;
			ccc[i12].num++;
		}
		
		K1 = ci.size();
}
	int sum = 0;
	REP(i, ci.size() ){
		sum += ccc[ci[i]].cp;
	}
	cout << sum << endl;
	

}
};