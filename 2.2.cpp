//2) Ìàññèâ ÷èñåë ðàçìåðà N ïðîèíèöèàëèçèðîâàòü ñëó÷àéíûìè ÷èñëàìè èç ïðîìåæóòêà îò -N äî N.
// Öèêëè÷åñêè ñäâèíóòü (íå ïåðåñòàâèòü, à èìåííî ñäâèíóòü! Ò.å. íåëüçÿ èñïîëüçîâàòü
// swap èëè àíàëîãè íàäî èñïîëüçîâàòü òîëüêî ïðèñâàèâàíèå a[i]=.....) ýëåìåíòû
// ìàññèâà âïðàâî íà 1 ýëåìåíò (ïîñëåäíèé ýëåìåíò ñòàíåò ïåðâûì,
// 1-é ñòàíåò 2-ì, 2-é ñòàíåò 3-ì è ò.ä.) ïîòîì öèêëè÷åñêè ñäâèíóòü
// ýëåìåíòû ìàññèâà âëåâî íà 1 ýëåìåíò (ïåðâûé ýëåìåíò ñòàíåò ïîñëåäíèì, 2-é ñòàíåò 1-ì è ò.ä)
#include <iostream>
#include <time.h>
void createArray(float a[], int N);//зачем передавать N если это - глобальная константа????
void rightshiftArray(float a[], int N);//зачем передавать N если это - глобальная константа????
void leftshiftArray(float a[], int N);//зачем передавать N если это - глобальная константа????
void printArray(float a[], int N);//зачем передавать N если это - глобальная константа????
const int N = 13;
using namespace std;
void createArray(float a[], int N)
{
	for (int i = 0; i < N; ++i)
		a[i] = (rand() % 101 - 50) / 10.0;//неверно!!! Надо от -N до N
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
	cout << "Èñõîäíûé ìàññèâ: ";
	printArray(a, N);
	rightshiftArray(a, N);
	cout << "Ìàññèâ ñäâèíóòûé âïðàâî: ";
	printArray(a, N);
	leftshiftArray(a, N);
	cout << "Ìàññèâ ñäâèíóòûé âëåâî: ";
	printArray(a, N);
	system("pause");
}
