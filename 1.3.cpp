//Положительные элементы массива А(N) переставить в конец массива, сохраняя порядок следования. Отрицательные элементы расположить в порядке убывания. Дополнительный массив не использовать.
#include<clocale> 
#include<iostream>
#include<ctime>
using namespace std;
void initArray(int* arr, int N) { //функция инициализации массива случайными числами

	for (int j = 0; j < N; j++) {
		arr[j] = rand() % N;
	}
}
void positiveSort(float* a, int N)//перестановка положительных элементов массива А(N), сохраняя порядок следования. 
{ 
	for (int i = N - 1;i >= 0;i--)
	{	if (*(a + i) > 0) 
	 {	for (int j = N - 1;j < N - 1;j++)
	  {	
		swap(*(a + j), *(a + j + 1));
	  }
			N--;
	 }
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
void sortNegatives(float*arr, int N)//сортировка отрицательных элементов массива 
{ 
	for (int i = 0;i < N - 1; i++)
	{
		for (int j = 0;j < N - 1;j++)
	    {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}	
	}
}
void giveMemory(float* &arr, int N) {
	try {
		arr = new float[N];
	}
	catch (...) {
		cout << "Переполнение памяти";
	}
}
int main() 
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N;
	cout << "Введи колличество элементов массива\n";
	cin >> N;
	float* A;
	giveMemory(A, N);
	initArray(A, N);
	cout << "Введенный массив\n";
	printArray(A, N);
	positiveSort(A, N);
	cout << "Сортированный массив\n";
	sortNegatives(A, N);
	printArray(A, N);
	delete[] A;
	A = nullptr;
	system("pause");
}
