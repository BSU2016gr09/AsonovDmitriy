//4) ћассив целых чисел размера N проинициализировать последовательными числами от 1 до N.
//"ѕеретусовать" элементы массива двум€ способами, предложенными на паре: с использованием
//доп.массива и просто мен€€ местами случайные элементы.
#include <iostream>
#include <ctime>
void createArray(float A[], int N);
void printArray(float A[], int N);
void mixArray(float A[], int N);
const int N = 13;
using namespace std;
void createArray(float A[], int N)
{
	for (int i = 0; i < N; ++i)
		A[i] = (rand() % 101 - 50) / 10.0;
}
void printArray(float A[], int N)
{
	for (int i = 0; i < N; i++)
		cout << A[i] << " "; cout << '\n';
}
void mixArray(float A[], int N)
{
	
	for(int i = 0;i < N;i++)
		swap(A[i], A[rand() % N]);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	float A[N];
	createArray(A, N);
	cout << "Ќачальный массив" << '\n';
	printArray(A, N);
	cout << '\n' << "ѕеремешанный массив" << '\n';
	mixArray(A, N);
	printArray(A, N);
	system("pause");
}
