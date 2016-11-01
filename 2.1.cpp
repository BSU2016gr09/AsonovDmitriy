//Циклически сдвинуть элементы массива вправо на 1 элемент, потом циклически сдвинуть элементы массива влево на 1 элемент
#include <iostream>
#include <time.h>
void createArray(float a[], int N);
void turnArray(float a[], int N);
const int N = 13;
using namespace std;
void createArray(float a[], int N)
{
	for (int i = 0; i < N; ++i)
		a[i] = (rand() % 101 - 50) / 10.0;
}
void turnArray(float a[], int N)
{
	int i = 0;
	for (i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
	for (i = 0; i < (N>2); i++)
		swap(a[i], a[N - i - 1]);
	for (i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	float a[N];
	int i;
	srand(time(NULL));
	createArray(a, N);
	turnArray (a, N);
	system("pause");
}