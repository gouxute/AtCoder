#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<=(int)n-1;i++)
#define FOR(i,n,m) for(int i=(int)n;i<=(int)m-1;i++)

int N,M;
int a[16];
int b[50][18];
int re1;
int out[9];

int main(){
	cin >> N >> M;
	REP(i, N){
		cin >> a[i];
	}
	REP(i, M){
		int b1, c1;
		cin >> b1 >> c1;
		b[i][0] = b1;
		b[i][1] = c1;
		FOR(j,2, c1+2){
			cin>>b[i][j];
		}
	}

	
	int out1[9];
	FOR(i1, 1, N-7){
		FOR(i2, i1 + 1, N-6){
			FOR(i3, i2 + 1, N-5){
				FOR(i4, i3 + 1, N - 4){
					FOR(i5, i4 + 1, N - 3){
						FOR(i6, i5 + 1, N - 2){
							FOR(i7, i6 + 1, N - 1){
								FOR(i8, i7 + 1, N){
									FOR(i9, i8 + 1, N+1){
										out[0] = i1;
										out[1] = i2;
										out[2] = i3;
										out[3] = i4;
										out[4] = i5;
										out[5] = i6;
										out[6] = i7;
										out[7] = i8;
										out[8] = i9;
										if (i2 == 2&&i1==1&&i3==4&&i5==8)
											int sss = 0;
										int re = 0;
										REP(i, 9){
											re += a[out[i]-1];
										}
										REP(i, M){
											bool s = true;
											int count = 0;
											FOR(j, 2, b[i][1]+2)
											{
												bool s1 = false;
												REP(k, 9){
													
													if (out[k] == b[i][j]){
														s1 = true;
													}
												}
												if (s1){
													count++;
													s1 = false;
												}
											}
											if (count < 3)
												s = false;
											if (s){
												re += b[i][0];
											}
										}
										if (re >= re1){
											re1 = re;
											REP(ii, 9){
												out1[ii] = out[ii];
											}
										}
									}
								}
							}
						}
					}
				}

			}
		}
	}

	cout << re1 << endl;
	
	}


