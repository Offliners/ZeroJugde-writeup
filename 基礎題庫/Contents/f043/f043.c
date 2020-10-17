#include<stdio.h>

int main(void)
{
	long int R, A, B;
	
	while(scanf("%ld %ld", &R, &A) != EOF)
	{
		if(R == A)
			A -= 3;
		
		B = R - A;
		if(A < B)
			printf("%ld+%ld=%ld\n", A, B, R);
		else
			printf("%ld+%ld=%ld\n", B, A, R);
	}
	
	return 0;
}
