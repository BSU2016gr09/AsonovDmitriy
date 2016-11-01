//Массив А чисел размера N проинициализировать случайными числами из промежутка от -N до N.
// Не используя функции из задачи 2-2 Написать функции (без swap и аналогов) циклического сдвига
// элементов массива вправо на k элементов (1-й станет 1+k -ым, 2-й станет 2+k -ым и т.д.)
// и влево на k элементов. В main написать вызов этих функций для числа k, 
//которое вводит пользователь. (k может быть в частности =0, тогда сдвига нет,
// k=1 - задача аналогично предыдущей 2-2.cpp и т.д)
#include <iostream>
#include <ctime>
void createArray(float A[], int N);
void rightShiftArray(float A[], float B[], int N, int k);
void leftShiftArray(float A[], float B[], int N, int k);
void printArray(float A[], int N); 
using namespace std;
const int N = 13;
void createArray(float A[], int N)
{
	for (int i = 0; i < N; ++i)
		A[i] = (rand() % 101 - 50) / 10.0;
}
void rightShiftArray(float A[], float B[], int N, int k)
{
	for (int i = 0; i < N; i++)
	B[(i + k%N) % N] = A[i];
}
void leftShiftArray(float A[], float B[], int N, int k) 
{
	for (int i = 0; i < N; i++)
	B[((i + N)- k%N) % N] = A[i];
}
void printArray(float A[], int N)
{
	for (int i = 0; i < N; i++)
	cout << a[i] << " "; cout << '\n';
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	float A[N], B[N];
	int k;
	cout << "Введите количество элементов на которое необходимо сдвинуть массив"<<'\n';
	cin >> k;
    createArray(A, N);
	cout << "Начальный массив"<<'\n';
	printArray(A, N);
	rightShiftArray(A, B, N, k);
	cout << "Массив сдвинутый на k элементов вправо"<<'\n';
	printArray(B, N);
	leftShiftArray(B, A, N, k);
	cout << "Массив сдвинутый на k элементов влево"<<'\n';
	printArray(A, N);
	system("pause");
}