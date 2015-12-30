#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
class A{
double R, D;
int main(){
	cin >> R >> D;
	double pi = atan(1) * 4;
	cout << setprecision(20)<< R*R* pi * D * 2 * pi << endl;
}
};