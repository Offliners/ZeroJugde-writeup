#include <stdio.h>

#define MAX 10000

char priority(char);
void inToPostfix(char*, char*);
long long cale(long long, long long, char);
long long postfixToInt(char*);

long long stack[MAX];
char expr[MAX], postfix[MAX], top;

int main(void)
{
    while (gets(expr) != NULL)
    {
        inToPostfix(expr, postfix);
        printf("%lld\n", postfixToInt(postfix));
    }
    return 0;
}

char priority(char op)
{
    switch (op)
    {
	    case '*': 
		case '/': 
		case '%':
	        return 2;
	    case '+': 
		case '-':
	        return 1;
	    default:
	        return 0;
    }
}

void inToPostfix(char* infix, char* postfix)
{
    int sTop = 0;
    char stack[MAX] = {0};
    top = 0;
    for(int i = 0; infix[i]; i++)
    {
        switch(infix[i])
        {
	        case ' ':
	            break;
	        case '(':
	            stack[++sTop] = infix[i];
	            break;
	        case ')':
	            while (stack[sTop] != '(')
	                postfix[top++] = stack[sTop--];
	            sTop--;
	            break;
	        case '+': 
			case '-': 
			case '*': 
			case '/': 
			case '%':
	            while (priority(infix[i]) <= priority(stack[sTop]))
	                postfix[top++] = stack[sTop--];
	                
	            stack[++sTop] = infix[i];
	            break;
	        default:
	            do
	            {
	                postfix[top++] = infix[i++];
	            } while (infix[i] >= '0' && infix[i] <= '9');
	            postfix[top++] = ' ';
	            i--;
        }
    }
    while (sTop)
        postfix[top++] = stack[sTop--];
    
	postfix[top++] = '\0';
}

long long cale(long long lhs, long long rhs, char op)
{
    switch (op)
    {
	    case '+': 
			return lhs + rhs;
	    case '-': 
			return lhs - rhs;
	    case '*': 
			return lhs * rhs;
	    case '/': 
			return lhs / rhs;
	    case '%': 
			return lhs % rhs;
    }
    return -1;
}

long long postfixToInt(char* postfix)
{
    stack[0] = 0;
    int sTop = 0;
    char* now = postfix - 1;
    for(int i = 0; postfix[i]; i++)
    {
        if (postfix[i] >= '0' && postfix[i] <= '9')
            stack[sTop] = stack[sTop] * 10 + (postfix[i] - '0');
        else if (postfix[i] == ' ')
            sTop++;
        else
        {
            sTop--;
            stack[sTop - 1] = cale(stack[sTop - 1], stack[sTop], postfix[i]);
            stack[sTop] = 0;
        }
    }
    return stack[0];
}

