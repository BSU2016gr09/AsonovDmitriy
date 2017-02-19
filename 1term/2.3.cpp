//Ìàññèâ À ÷èñåë ðàçìåðà N ïðîèíèöèàëèçèðîâàòü ñëó÷àéíûìè ÷èñëàìè èç ïðîìåæóòêà îò -N äî N.
// Íå èñïîëüçóÿ ôóíêöèè èç çàäà÷è 2-2 Íàïèñàòü ôóíêöèè (áåç swap è àíàëîãîâ) öèêëè÷åñêîãî ñäâèãà
// ýëåìåíòîâ ìàññèâà âïðàâî íà k ýëåìåíòîâ (1-é ñòàíåò 1+k -ûì, 2-é ñòàíåò 2+k -ûì è ò.ä.)
// è âëåâî íà k ýëåìåíòîâ. Â main íàïèñàòü âûçîâ ýòèõ ôóíêöèé äëÿ ÷èñëà k, 
//êîòîðîå ââîäèò ïîëüçîâàòåëü. (k ìîæåò áûòü â ÷àñòíîñòè =0, òîãäà ñäâèãà íåò,
// k=1 - çàäà÷à àíàëîãè÷íî ïðåäûäóùåé 2-2.cpp è ò.ä)
#include <iostream>
#include <ctime>
void createArray(float A[], int N);
void rightShiftArray(float A[], float B[], int N, int k);//зачем передавать N если это - глобальная константа????
void leftShiftArray(float A[], float B[], int N, int k);//зачем передавать N если это - глобальная константа????
void printArray(float A[], int N); //зачем передавать N если это - глобальная константа????
using namespace std;
const int N = 13;
void createArray(float A[], int N)
{
	for (int i = 0; i < N; ++i)
		A[i] = (rand() % 101 - 50) / 10.0;// по условию от -N до N
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
	cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ íà êîòîðîå íåîáõîäèìî ñäâèíóòü ìàññèâ"<<'\n';
	cin >> k;
    createArray(A, N);
	cout << "Íà÷àëüíûé ìàññèâ"<<'\n';
	printArray(A, N);
	rightShiftArray(A, B, N, k);
	cout << "Ìàññèâ ñäâèíóòûé íà k ýëåìåíòîâ âïðàâî"<<'\n';
	printArray(B, N);
	leftShiftArray(B, A, N, k);
	cout << "Ìàññèâ ñäâèíóòûé íà k ýëåìåíòîâ âëåâî"<<'\n';
	printArray(A, N);
	system("pause");
}
