#include<stdio.h>                                                                                                                                                                                           
#include<math.h>

int isArmstrong(int);

int main(void)
{
    int start, end;

	while(scanf("%d %d", &start, &end) != EOF)
	{
		int count = 0;
		for(int i = start; i < end; i++)
		{
			if(isArmstrong(i))
			{
				printf("%d ", i);
				count++;
			}
		}
		
		if(!count)
			printf("none");
			  
		printf("\n");
	}

    return 0;
}

int isArmstrong(int num)
{
    int rem;
    int total = 0;
    int exp = 0;
    int org = num;

    while(org != 0)
    {
            org /= 10;
            exp++;
    }

    org = num;
    while(org != 0)
    {
            rem = org % 10;
            total += pow(rem, exp);
            org /= 10;
    }

    if(total == num)
            return 1;
    else
            return 0;
}
