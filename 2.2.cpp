//2) ћассив чисел размера N проинициализировать случайными числами из промежутка от -N до N.
// ÷иклически сдвинуть (не переставить, а именно сдвинуть! “.е. нельз€ использовать
// swap или аналоги надо использовать только присваивание a[i]=.....) элементы
// массива вправо на 1 элемент (последний элемент станет первым,
// 1-й станет 2-м, 2-й станет 3-м и т.д.) потом циклически сдвинуть
// элементы массива влево на 1 элемент (первый элемент станет последним, 2-й станет 1-м и т.д)
#include <iostream>
#include <time.h>
void createArray(float a[], int N);
void rightshiftArray(float a[], int N);
void leftshiftArray(float a[], int N);
void printArray(float a[], int N);
const int N = 13;
using namespace std;
void createArray(float a[], int N)
{
	for (int i = 0; i < N; ++i)
		a[i] = (rand() % 101 - 50) / 10.0;
}
void rightshiftArray(float a[], int N)
{
	int tmp = a[--N];
	while (N > 0)
		a[N--] = a[N - 1];
		a[0] = tmp;
}
void leftshiftArray(float a[], int N)
{
	int i, tmp = a[0];
	for (i = 0, N--; i < N; i++) a[i] = a[i + 1];
	a[N-1] = tmp;
}
void printArray(float a[], int N)
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
	float a[N];
	createArray(a, N);
	cout << "»сходный массив: ";
	printArray(a, N);
	rightshiftArray(a, N);
	cout << "ћассив сдвинутый вправо: ";
	printArray(a, N);
	leftshiftArray(a, N);
	cout << "ћассив сдвинутый влево: ";
	printArray(a, N);
	system("pause");
}