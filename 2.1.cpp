//Циклически сдвинуть элементы массива вправо на 1 элемент, потом циклически сдвинуть элементы массива влево на 1 элемент
#include <iostream>
#include <time.h>
const int N = 13;
using namespace std;
void createArray(int a[], int N)
{
	int i = 0;
	for (i = 0; i < N; i++)
		a[i] = rand() % 100;
}
void turnArray(int a[], int N)
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
	int a[N], i;
	srand(time(NULL));
	createArray(a, N);
	turnArray (a, N);
	system("pause");
}