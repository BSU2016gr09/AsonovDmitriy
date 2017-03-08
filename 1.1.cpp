//Расположить в порядке возрастания элементы массива А(N), начиная с k-го элемента.
#include<iostream>
#include<ctime>
using namespace std; 
void initArray(int* arr, int N) { //функция инициализации массива случайными числами

	for (int j = 0; j < N; j++) {
		arr[j] = rand() % N;
	}
}

void printArray(int* arr, int N)  //функция вывода массива 
{
	
	for (int j = 0; j < N; j++) 
	{
		cout << arr[j] << " ";
	}
	cout << "\n";
}
void sortArray(int*arr, int N, int k) //сортировка массива начиная с k-го элемента
{ 
	for (int i = k - 1;i < N - 1; i++)
	 {for (int j = k - 1; j < N - 1; j++)
		{if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);}
	 }
}

void giveMemory(int* &arr, int N)
{
	try {
		arr = new int[N];
	}
	catch (...) {
		cout << "Переполнение памяти";
	}
}
int main()
{	setlocale(LC_ALL,"Russian");
	srand(time(NULL));
	int N, k;
	cout << "Введи колличество элементов массива \n";
	cin >> N;
	int* A;
	giveMemory(A, N);
	initArray(A, N);
	printArray(A, N);
	cout << "\n Введи номер с которого начать сортировку\n";
	cin >> k;
	cout << "Сортированный массив\n";
	sortArray(A, N, k);
	printArray(A, N);
	delete[] A;
	A = nullptr;
	system("pause");
}
