#include<stdio.h>

int main(void)
{
	float a, b, c, e, f, d;
	
	while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF)
	{
		float delta = a * e - b * d;
		float delta_x = c * e - b * f;
		float delta_y = a * f - c * d;
		
		if(delta == 0 && delta_x == 0 && delta_y == 0)
			printf("Too many\n");
		else if(delta == 0 && delta_x * delta_y != 0)
			printf("No answer\n");
		else
		{
			printf("x=%.2f\n", delta_x/delta);
			printf("y=%.2f\n", delta_y/delta);			
		}
	}
	
	return 0;
}
