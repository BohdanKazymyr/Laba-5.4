#include <iostream>
#include <cmath>
using namespace std;
double P0(const double K, const double N)
{
	double P = 1;
	for (int i = K; i <= N; i++)
		P *= (N * i * 1.0) / (1.0 * i * i + N * N);
	return P;
}
double P1(const double K, const double N, const double i)
{
	if (i > N)
		return 1;
	else
		return (N * i * 1.0) / (1.0 * i * i + N * N) * P1(K, N, i + 1);
}
double P2(const double K, const double N, const double i)
{
	if (i < K)
		return 1;
	else
		return (N * i * 1.0) / (1.0 * i * i + N * N) * P2(K, N, i - 1);
}
double P3(const double K, const double N, const double i, double t)
{
	t *= (N * i * 1.0) / (1.0 * i * i + N * N);
	if (i >= N)
		return t;
	else
		return P3(K, N, i + 1, t);
}
double P4(const double K, const double N, const double i, double t)
{
	t *=  (N * i * 1.0) / (1.0 * i * i + N * N);
	if (i <= K)
		return t;
	else
		return P4(K, N, i - 1, t);
}
int main()
{
	int K, N = 16;
	cout << "N = "; cin >> K;
	cout << "(iter) P0 = " << P0(K, N) << endl;
	cout << "(rec up ++) P1 = " << P1(K, N, K) << endl;
	cout << "(rec up --) P2 = " << P2(K, N, N) << endl;
	cout << "(rec down ++) P3 = " << P3(K, N, K, 1) << endl;
	cout << "(rec down --) P4 = " << P4(K, N, N, 1) << endl;
	return 0;
}