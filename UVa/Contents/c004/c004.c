#include<stdio.h>

int main(void)
{
	int n, s, d, t1, t2;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &s, &d);
			
			t1 = (s + d) / 2;
			t2 = (s - d) / 2;
			
			if(t1 >= 0 && t2 >= 0 && (s + d) % 2 == 0)
				printf("%d %d\n", t1, t2);
			else
				printf("impossible\n");
		}
	}
	
	return 0;
}
