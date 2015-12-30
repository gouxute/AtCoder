#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class sb{
int mai1n(){
	string a ;
	getline(cin, a);
	istringstream b(a);
	string c[100];
	string d[100];
	int i = 0;
	while (b){
		b >> c[i];
		i++;
	}
	i = i - 2;
	for (int j = 0; j <= i; j++){
	if (c[j] == "Left")
		d[j] = "<";
	if (c[j] == "Right")
		d[j] = ">";
	if (c[j] == "AtCoder")
		d[j] = "A";
	}
	for (int j = 0; j <= i-1; j++)
		cout << d[j]<<' ' ;
	cout << d[i];
	cout << endl;
	return 0;
}
};