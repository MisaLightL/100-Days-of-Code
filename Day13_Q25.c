#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+ - * / %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not possible");
            break;

        case '%':
            if(b != 0)
                printf("Result = %d", a % b);
            else
                printf("Division by zero not possible");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
