//4) ������ ����� ����� ������� N ������������������� ����������������� ������� �� 1 �� N.
//"������������" �������� ������� ����� ���������, ������������� �� ����: � ��������������
//���.������� � ������ ����� ������� ��������� ��������.
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
	cout << "��������� ������" << '\n';
	printArray(A, N);
	cout << '\n' << "������������ ������" << '\n';
	mixArray(A, N);
	printArray(A, N);
	system("pause");
}
