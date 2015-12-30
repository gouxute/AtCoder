#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
class b2{
int N, M, A[16], sum[1 << 16], bc[1 << 16];
int B[50], bit[50];

int main()
{
	scanf("%d %d", &N, &M);
	for (int i = 0; i<N; i++) scanf("%d", &A[i]), sum[1 << i] = A[i];
	for (int i = 0; i<M; i++){
		int sz;
		scanf("%d %d", &B[i], &sz); while (sz--){
			int j; scanf("%d", &j);
			bit[i] |= 1 << (j - 1);
		}
	}

	int ans = 0;
	for (int i = 1; i<(1 << N); i++){
		int x = i & (-i);
		bc[i] = bc[i - x] + 1;
		if (x != i) sum[i] = sum[i - x] + sum[x];

		if (bc[i] == 9){
			int g = sum[i];
			for (int j = 0; j<M; j++){
				if (bc[i & (bit[j])] >= 3){
					g += B[j];
				}
			}
			if (ans < g)
				ans = g;
		}
	}
	printf("%d\n", ans);

	return 0;
}
};