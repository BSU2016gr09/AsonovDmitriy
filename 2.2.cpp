//2) ������ ����� ������� N ������������������� ���������� ������� �� ���������� �� -N �� N.
// ���������� �������� (�� �����������, � ������ ��������! �.�. ������ ������������
// swap ��� ������� ���� ������������ ������ ������������ a[i]=.....) ��������
// ������� ������ �� 1 ������� (��������� ������� ������ ������,
// 1-� ������ 2-�, 2-� ������ 3-� � �.�.) ����� ���������� ��������
// �������� ������� ����� �� 1 ������� (������ ������� ������ ���������, 2-� ������ 1-� � �.�)
#include <iostream>
#include <time.h>
void createArray(float a[], int N);
void rightshiftArray(float a[], int N);
void leftshiftArray(float a[], int N);
void printArray(float a[], int N);
const int N = 13;
using namespace std;
void createArray(float a[], int N)
{
	for (int i = 0; i < N; ++i)
		a[i] = (rand() % 101 - 50) / 10.0;
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
	cout << "�������� ������: ";
	printArray(a, N);
	rightshiftArray(a, N);
	cout << "������ ��������� ������: ";
	printArray(a, N);
	leftshiftArray(a, N);
	cout << "������ ��������� �����: ";
	printArray(a, N);
	system("pause");
}