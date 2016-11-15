//Öèêëè÷åñêè ñäâèíóòü ýëåìåíòû ìàññèâà âïðàâî íà 1 ýëåìåíò, ïîòîì öèêëè÷åñêè ñäâèíóòü ýëåìåíòû ìàññèâà âëåâî íà 1 ýëåìåíò
#include <iostream>
#include <time.h>
void createArray(float a[], int N);//зачем передавать N если это - глобальная константа????
void turnArray(float a[], int N);//зачем передавать N если это - глобальная константа????
const int N = 13;
using namespace std;
void createArray(float a[], int N)//зачем передавать N если это - глобальная константа????
{
	for (int i = 0; i < N; ++i)
		a[i] = (rand() % 101 - 50) / 10.0;
}
void turnArray(float a[], int N)//зачем передавать N если это - глобальная константа????
{
	int i = 0;
	for (i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
	for (i = 0; i < (N>2); i++) // а что такое (N>2)????????
		swap(a[i], a[N - i - 1]);
	for (i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	float a[N];
	int i;
	srand(time(NULL));
	createArray(a, N);
	turnArray (a, N);
	system("pause");
}
