//4) Ìàññèâ öåëûõ ÷èñåë ðàçìåðà N ïðîèíèöèàëèçèðîâàòü ïîñëåäîâàòåëüíûìè ÷èñëàìè îò 1 äî N.
//"Ïåðåòóñîâàòü" ýëåìåíòû ìàññèâà äâóìÿ ñïîñîáàìè, ïðåäëîæåííûìè íà ïàðå: ñ èñïîëüçîâàíèåì
//äîï.ìàññèâà è ïðîñòî ìåíÿÿ ìåñòàìè ñëó÷àéíûå ýëåìåíòû.
#include <iostream>
#include <ctime>
void createArray(float A[], int N);
void printArray(float A[], int N);
void mixArray(float A[], int N);// это первый способ. А где второй?
const int N = 13;
using namespace std;
void createArray(float A[], int N)// по условию надо числа от 1 до N
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
	cout << "Íà÷àëüíûé ìàññèâ" << '\n';
	printArray(A, N);
	cout << '\n' << "Ïåðåìåøàííûé ìàññèâ" << '\n';
	mixArray(A, N);
	printArray(A, N);
	system("pause");
}
