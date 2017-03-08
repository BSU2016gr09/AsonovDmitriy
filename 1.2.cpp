#include<iostream> //Даны точки плоскости своими координатами в виде двух одномерных массивов. Точки плоскости рассортировать по возрастанию расстояния до прямой ax + by + c = 0.
#include<ctime>
#include<clocale>
using namespace std;
void initArray(int* arr, int N)//функция инициализации массива случайными числами
{ 
	for (int j = 0; j < N; j++) 
	{
		arr[j] = rand() % N;
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
float calculateDistance(int x, int y, int a, int b, int c)  //функция вычисления растояния от точек до прямой 
{	
	return abs(a*x + b*y + c) / sqrt(a*a + b*b);
}
void printPoints(int* x, int*y, int N)  //функция вывода точек
{	
	for (int i = 0; i < N; i++) 
	{
		cout << "(" << x[i] << " , " << y[i] << "),";
	}
	cout << "\n";
}
void initDistance(int* distance, int* x, int* y, int N, int a, int b, int c)  //функция инициализации массива distances
{	
	for (int i = 0; i < N; i++) 
	{
		distance[i] = calculateDistance(x[i], y[i], a, b, c);
	}
}
void sortPoints(int* distance, int* x, int* y, int N)  //функция сортировки точек по условию
{	for (int i = 0; i < N - 1; i++)
	{for (int j = i + 1; j < N - 1; j++) 
		{if (distance[j] > distance[j + 1])
			{	swap(distance[j], distance[j + 1]);
				swap(x[j], x[j + 1]);
				swap(y[j], y[j + 1]);
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int a, b, c, N;
	int* x;
	int* y;
	int* distance;
	
	cout << "Количество точек: ";
	cin >> N;
	giveMemory(distance, N);
	giveMemory(x, N);
	giveMemory(y, N);
	cout << "\n";
	cout << "Введите коэфициент А в уравнении: Аx + By + C = 0 \n";
	cin >> a;
	cout << "Введите коэфициент B \n";
	cin >> b ;
	cout << "Введите коэфициент C \n";
	cin  >> c;
	cout << "Уранение прямой относительно которой будут рассчитаны расстояния \n";
	cout << a<<"x+"<<b<<"y+"<<c<<"=0"<<"\n";
	initArray(x, N);
	initArray(y, N);
	cout << "Созданные точки: ";
	printPoints(x, y, N);
	initDistance(distance, x, y, N, a, b, c);
	sortPoints(distance, x, y, N);
	cout << "Точки после сортировки:";
	printPoints(x, y, N);
	delete[] distance; delete[] x; delete[] y;
	distance = nullptr; x = nullptr; y = nullptr;
	system("pause");
}
