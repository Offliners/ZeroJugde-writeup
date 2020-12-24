#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	char record[11];
	
	while(scanf("%d", &n) != EOF)
	{
		int kill = 0;
		int assist = 0;
		int die = 0;
		int flag = 0;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%s", record);
			
			if(!strcmp(record, "Get_Kill"))
			{
				kill++;
				flag++;
				
				switch(flag)
				{
					case 1:
					case 2:
						printf("You have slain an enemie.\n");
						break;
					case 3:
						printf("KILLING SPREE!\n");
						break;
					case 4:
						printf("RAMPAGE~\n");
						break;
					case 5:
						printf("UNSTOPPABLE!\n");
						break;
					case 6:
						printf("DOMINATING!\n");
						break;
					case 7:
						printf("GUALIKE!\n");
						break;
					default:
						printf("LEGENDARY!\n");
						break;
				}
			}
			else if(!strcmp(record, "Get_Assist"))
				assist++;
			else if(!strcmp(record, "Die"))
			{
				if(flag < 3)
					printf("You have been slained.\n");
				else
					printf("SHUTDOWN.\n");
				
				die++;
				flag = 0;
			}
		}
		
		printf("%d/%d/%d\n", kill, die, assist);
	}
	
	return 0;
}
