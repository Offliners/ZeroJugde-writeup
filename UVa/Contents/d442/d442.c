#include<stdio.h>

int next(int);
int isHappy(int);

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			
			printf("Case #%d: %d is ", i + 1, temp);
			if(isHappy(temp))
				printf("a Happy number.\n");
			else
				printf("an Unhappy number.\n");
		}
	}
	
	return 0;
		
}

int next(int num)
{
    int result = 0;
    int rem;
    
    while(num != 0)
    {
        rem = num % 10;
        num /= 10;
        result += rem * rem;
    }
    
    return result;
}

int isHappy(int n)
{
    int num1 = n;
    int num2 = n;
    
    do
    {
        num1 = next(num1);
        num2 = next(next(num2));
    }while(num2 != num1);
    
    return (num1 == 1) ? 1 : 0;
}
