//Массив целых чисел размера N проинициализировать случайными числами из промежутка от 1 до N. "Перевернуть" 
#include <iostream>
#include <time.h>
const int N = 13;
using namespace std;
void createArray(int a[], int N)
{
	int i = 0;
	while (i<N)
	{
		a[i] = rand() % N +1;
		i++;
	}
}
void rightshiftArray(int a[], int N)
{
	int tmp = a[--N];
	while (N > 0)
		a[N--] = a[N - 1];
		a[0] = tmp;
}
void leftshiftArray(int a[], int N)
{
	int i, tmp = a[0];
	for (i = 0, N--; i < N; i++) a[i] = a[i + 1];
	a[N-1] = tmp;
}
void printArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		cout << a[i] << " ";
		i++;
	}
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int a[N];
	createArray(a, N);
	cout << "Исходный массив: ";
	printArray(a, N);
	rightshiftArray(a, N);
	cout << "Массив сдвинутый вправо: ";
	printArray(a, N);
	leftshiftArray(a, N);
	cout << "Массив сдвинутый влево: ";
	printArray(a, N);
	system("pause");
}