#include <cstdio>
using namespace std;

int main() {
	int M;
	int N;  // 10 秒間を何等分するか
	double T;

	scanf("%lf%d%d", &T, &M, &N);  // 刻み幅などの入力

	double u[M + 1];  // 変数の初期化
	u[0] = u[M] = 0;
	for (int i = 1; i < M; i++) {
		if (i * 2 <= M)
			u[i] = (double)i / M;
		else
			u[i] = (double)(M - i) / M;
	}

	double r = T * M * M / N;
	// 前進 Euler 法
	for (int n = 0; n < N; n++) {
		double old_u[M + 1];
		for (int i = 0; i <= M; i++) old_u[i] = u[i];
		for (int i = 1; i < M; i++) {
			u[i] = r * (old_u[i - 1] + old_u[i + 1]) + (1 - 2 * r)*old_u[i];
		}
	}
	for (int i = 0; i <= M; i++) {
		printf("%lf %.10lf\n", (double)i / M, u[i]);
	}
	return 0;
}
