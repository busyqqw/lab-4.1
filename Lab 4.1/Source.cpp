#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k,N;
	double P;
	cout << "N = "; cin >> N;
	P = 1;
	k = 1;
	while (k <= N)
	{
		P *= (k * k) / (N * N) * cos((N * N) / (k * k));
		k++;
	}
	cout << P << endl;
	P = 1;
	k = 1;
	do {
		P *= (k * k) / (N * N) * cos((N * N) / (k * k));
		k++;
	} while (k <= N);
	cout << P << endl;
	P = 1;
	for (k = 1; k <= N; k++)
	{
		P *= (k * k) / (N * N) * cos((N * N) / (k * k));
	}
	cout << P << endl;
	P = 1;
	for (k = N; k >= 1; k--)
	{
		P *= (k * k) / (N * N) * cos((N * N) / (k * k));
	}
	cout << P << endl;
	return 0;
}
