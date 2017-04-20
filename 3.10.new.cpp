#include <iostream>
#include <iomanip>
using namespace std;

void give_memory(int**&arr, int N, int M)
{
	try {
		arr = new int*[N];
		for (int i = 0; i < N; i++)
			arr[i] = new int[M];
	}
	catch (...) {
		cout << "System error..." << endl;
	}
}
void initArray(int** arr, int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = rand() % 100;

	cout << endl;
}
void DeleteArray(int **arr, int N)
{
	for (int i = 0; i<N; i++)
		delete[] arr[i];
	delete[] arr;
}

void PrintArray(int **arr, int N, int M)
{
	cout << '\n';
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j<M; j++)
			cout << setw(5) << arr[i][j];
		cout << '\n';
	}
}

void SortMatrix(int **arr, int N, int M)
{
	int tmp;
	do
	{
		tmp = 0;
		for (int j = 0; j < N; j++)
		{
			for (int i = 1; i < N; i++) {
				if (arr[i - 1][M - 1] > arr[i][M - 1]) swap(arr[i],arr[i-1]);
			}
		}
	} while (tmp);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int N, M;
	cout << "Введи колличество строк: ";
	cin >> N;
	cout << "Введи колличество столбцов: ";
	cin >> M;
	srand(time(NULL));
	int** arr;
	give_memory(arr, N, M);
	initArray(arr, N, M);
	cout << "Несортированная матрица: ";
	PrintArray(arr, N, M);
	cout << "Сортированная матрица: ";
	SortMatrix(arr, N, M);
	PrintArray(arr, N, M);
	DeleteArray(arr, N);
	getchar();
	arr = nullptr;
	system("pause");
}
