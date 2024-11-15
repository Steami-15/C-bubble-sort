#include <iostream>
using namespace std;
void BubbleSort(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				int temp = A[j];
				A[j] = A[j + 1];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}
int main(){

	int A[] = { 5, 8, 2, 1, 9, 0 };
	BubbleSort(A, 6);
	for (int i = 0; i < 6; i++)

		cout << A[i] << " ";
}
