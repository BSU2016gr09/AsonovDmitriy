/*В массиве А(N, M) переставить строки в порядке возрастания элементов последнего столбца.*/
#include <iostream>
#include <iomanip>
using namespace std;

int **InitArray(int N, int M)
{
	int **arr = new int*[N];//плохо. Где проверка????
	for (int i = 0; i<N; i++)
		arr[i] = new int[M];//плохо. Где проверка????
			for (int i = 0; i<N; i++)
				for (int j = 0; j<M; j++)
					arr[i][j] = rand() % 8 + 1;

	return arr;
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
		for (int i = 0; i < N - 1; i++) 
		{
			if (arr[i][M - 1] > arr[i + 1][M - 1]) 
			{
				for (int j = 0; j < M; j++)
					swap(arr[i][j], arr[i + 1][j]);//ПЛОХО СОВСЕМ. В задании надо "переставлиить строки". Для этого и есть у нас указате
				tmp = 1;
			}
		}
	} 
	while (tmp);
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
	int **arr = InitArray(N, M);
	cout << "Несортированная матрица: ";
	PrintArray(arr, N, M);
	cout << "Сортированная матрица: ";
	SortMatrix(arr, N, M);
	PrintArray(arr, N, M);
	DeleteArray(arr, N);
	getchar();
	system("pause");
}
