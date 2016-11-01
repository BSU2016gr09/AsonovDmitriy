//������ � ����� ������� N ������������������� ���������� ������� �� ���������� �� -N �� N.
// �� ��������� ������� �� ������ 2-2 �������� ������� (��� swap � ��������) ������������ ������
// ��������� ������� ������ �� k ��������� (1-� ������ 1+k -��, 2-� ������ 2+k -�� � �.�.)
// � ����� �� k ���������. � main �������� ����� ���� ������� ��� ����� k, 
//������� ������ ������������. (k ����� ���� � ��������� =0, ����� ������ ���,
// k=1 - ������ ���������� ���������� 2-2.cpp � �.�)
#include <iostream>
#include <ctime>
void createArray(float A[], int N);
void rightShiftArray(float A[], float B[], int N, int k);
void leftShiftArray(float A[], float B[], int N, int k);
void printArray(float A[], int N); 
using namespace std;
const int N = 13;
void createArray(float A[], int N)
{
	for (int i = 0; i < N; ++i)
		A[i] = (rand() % 101 - 50) / 10.0;
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
	cout << "������� ���������� ��������� �� ������� ���������� �������� ������"<<'\n';
	cin >> k;
    createArray(A, N);
	cout << "��������� ������"<<'\n';
	printArray(A, N);
	rightShiftArray(A, B, N, k);
	cout << "������ ��������� �� k ��������� ������"<<'\n';
	printArray(B, N);
	leftShiftArray(B, A, N, k);
	cout << "������ ��������� �� k ��������� �����"<<'\n';
	printArray(A, N);
	system("pause");
}