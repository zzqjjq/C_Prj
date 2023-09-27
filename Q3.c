#include<stdio.h>
#include<math.h>
void modifibounncciseqGen(int A[], int n);
int A[20];

int main() 
{
	int c, odd=1;
	printf("The fibonacciseq number are:");
	printf("%d %d,", 0,1);
	modifibounncciseqGen(A, 20);
	for (c = 3;c < 20;c+=2)
	{
		printf("%d,", A[c]);
	}
	printf("\n\n");
	printf("odd number are:");
	for (c = 2;c < 20; ++c)
	{
		if (A[c] % 2 != 0)
	{
		odd = A[c];
		printf("%d,", odd);
	}
	}
	return 0;
}

void modifibounncciseqGen(int A[], int n) 
{
	int c;
	A[0] = 0;
	A[1] = 1;
	for (c = 2;c < n;c=c++) 
	{
		A[c] = A[c - 1] + A[c - 2];
	}
	return 0;
}