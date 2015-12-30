#include<iostream>
#include<vector>
using namespace std;
class b{
int main1(){
	int N, M;
	cin >> N >> M;
	int check[1000000], check1[1000000];        //N
	int sci[100000][2];       //M
	int seg[100000];			//M
	bool result[50000];		//M

	for (int i = 0; i <= M - 1; i++)
		result[i] = true;
	seg[0] = 0;
	for (int i = 0; i <= N ; i++)
		check[i] = 0;
	vector<int> sc;
	int ct = 0;
	
	while (ct<=M-1){
		cin >> sci[ct][0] >> sci[ct][1];
		for (int i = sci[ct][0]; i <= sci[ct][1]; i++)
			check[i]++;
		if (ct == 0)
			seg[ct] = sci[ct][1] - sci[ct][0] + 1;
		if (ct>=1)
		seg[ct] = seg[ct-1]+ sci[ct][1] - sci[ct][0] + 1;
		ct++;
	}
	
	for (int i = 0; i <= M - 1; i++){
		for (int j = 0; j <= N; j++)
			check1[j] = check[j];

		for (int j = sci[i][0]; j <= sci[i][1]; j++)
			check1[j]--;

		for (int j = 1; j <= N; j++)
		if (check1[j] == 0 ){
			result[i] = false;
			break;
		}
		for (int j = 0; j <= N; j++)
			check1[j] = 0;
	}

		/*if (i == 1)
			int sss = 0;
		vector<int> sc1;
		sc1.assign(sc.begin(),sc.end());
		if (i==0)
			sc1.erase(sc1.begin() , sc1.begin() + seg[i] -1);
		else
		sc1.erase(sc1.begin() + seg[i-1], sc1.begin() + seg[i]);
		for (int j = 0; j <= sc1.size() - 1; j++)
			check[sc1.at(j)] = check[sc1.at(j)] +1;
		bool t = true;*/
	
	int cnt = 0;
	for (int i = 0; i <= M - 1;i++)
	if (result[i] == true)
		cnt++;
	cout << cnt << endl;
	for (int i = 0; i <= M - 1; i++)
	if (result[i] == true)
		cout << i+1 << endl;
	return 0;
}
};