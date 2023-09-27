#include<stdio.h>
#include<math.h>
void generate(int A[], int N);
void search(int A[], int N);
void replace(int A[], int N);


void main() 
{
	int MYARRAY[100], c;
	srand(time(NULL));
	printf("100 random number store in MYARRAY:");
	generate(MYARRAY, 99);
	printf("\n");
	search(MYARRAY, 99);
	printf("\n");
	replace(MYARRAY, 99);

	return 0;
}
void generate(int A[], int N)
{
	int c;// counter for generate random number
	for (c = 0; c <= N; c++) {
		A[c] = rand()%10;
		printf("%d,", A[c]);
	}
	return 0;
}

void search(int A[], int N)//function to search zero
{
	int c = 0, index, zero = 0;
	printf("\nzero index:");
	for (c = 0; c <= N; c++)
	{
		if (A[c] == 0)
		{
			index = c; // store location of zero
			zero= zero + 1;//count number of zero
			printf("%d,", index);

		}
	}
	printf("\n\nnumber of zero are: %d", zero);
}
void replace(int A[], int N) //function to replace 0
{
	int c;
	printf("\nreplace 0 with -1:");
	for (c = 0; c <= 99; c++) {
		if (A[c] == 0) 
		{
			A[c] = -1;//replace 0 to -1
		}
		printf("%d,",A[c]);
	}
}