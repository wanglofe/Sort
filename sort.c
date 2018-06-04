#include <stdio.h>
#include <stdlib.h>

static void print(int A[], int N);
void Bubble_Sort(int A[], int N);

int main(int argc, char **argv)
{
	int A[] = {6,5,4,3,7,8,90,3,1,6,8,5,23};
	int N = sizeof(A)/sizeof(int);
	print(A, N);
	Bubble_Sort(A, N);
	print(A, N);
}

static void print(int A[], int N)
{
	int i;
	for(i=0; i<N; i++) {
		printf("%d ", A[i]);
	}
	putchar('\n');
}

static void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Bubble_Sort(int A[], int N)
{
	int i, j;
	int flag;
	for(i=0; i<N; i++) {
		flag = 0;
		for(j=0; j<N-i-1; j++) {
			if(A[j] > A[j+1]) {
				Swap(&A[j], &A[j+1]);
				flag = 1;
			}
		}
		if(!flag) {
			break;
		}
	}
}

void Insertion_Sort(int *A, int N)
{
	int i, j;
	int tmp;
	for(i=0; i<N; i++) {
		tmp = A[i];
		for(j=i+1; j>=0; j--) {
			if(A[j] < A[j-1]) {
				A[j] = A[j-1];
			}
			else{
				A[]
			}
		}
	}
}



