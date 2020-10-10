#include<stdio.h>
#include<string.h>

char charRome[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int numRome[7] = {1, 5, 10, 50, 100, 500, 1000};
char *strRome[6] = {"CM", "CD", "XC", "XL", "IX", "IV"};
char *stateRome[6] = {"DCCCC", "CCCC", "LXXXX", "XXXX", "VIIII", "IIII"};

void trans(char []);
void trans2(char []);
int Rome2Num(char []);
void Num2Rome(int, char []);

int main(void)
{
	char input1[128] = {0};
	char input2[128] = {0};
	
	while(scanf("%s", input1) && input1[0] != '#')
	{
		int num1, num2;
		char result[128] = {0};
		
		scanf("%s", input2);
		num1 = Rome2Num(input1);
		num2 = Rome2Num(input2);
		Num2Rome(num1 - num2, result);
		printf("%s\n", result);
	}
	
	return 0;
}

void trans(char str[128])
{
    char tmp[128] = {0};
    char *ptr = str;
    char *ptr2 = NULL;

    for (int i = 0; i < 6; i++)
    {
        if ((ptr2  = strstr(ptr, strRome[i])) != NULL)
        {
            strncat(tmp, ptr, ptr2 - ptr);
            strcat(tmp, stateRome[i]); 
            ptr = ptr2 + 2;
        }
    }

    if (ptr)
        strcat(tmp, ptr);
    strcpy(str, tmp);
}

void trans2(char str[128])
{
    char tmp[128] = {0};
    char *ptr = str;
    char *ptr2 = NULL;

    for (int i = 0; i < 6; i++)
    {
        if ((ptr2 = strstr(ptr, stateRome[i])) != NULL)
        {
            strncat(tmp, ptr, ptr2 - ptr);
            strcat(tmp, strRome[i]);
            ptr = ptr2 + strlen(stateRome[i]);
        }
    }

    if (ptr)
        strcat(tmp, ptr);
    strcpy(str, tmp);
}

int Rome2Num(char str[128])
{
    int size;
    int sum = 0;

    trans(str);
    size = strlen(str);

    for (int i = 0, j = 6; i < size;)
    {
        if (str[i] == charRome[j])
        {
            sum += numRome[j];
            i++;
        }
        else
            j--;
    }
    return sum;
}

void Num2Rome(int num, char str[128])
{
    if (num == 0)
    {
        strcpy(str, "ZERO");
        return;
    }

    if (num < 0)
        num *= -1;

    for (int i = 6; i >= 0; --i)
    {
        int cnt = num / numRome[i];

        if (cnt > 0)
        {
            for (int j = 0; j < cnt; j++)
            {
                char tmp[128] = {0};
                sprintf(tmp, "%s%c", str, charRome[i]);
                strcpy(str, tmp);
            }
            num -= cnt * numRome[i];
        }
    }
    trans2(str);
}
