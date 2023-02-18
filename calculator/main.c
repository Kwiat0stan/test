#include <stdio.h>

int main()
{
    int num, num2;
    char operator;
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int i = 0;
    do
    {
        switch(operator)
        {
            case '+':
                printf("Twoja liczba to: %d.", num + num2);
                i = 0;
                break;
            case '-':
                printf("Twoja liczba to: %d.", num - num2);
                i = 0;
                break;
            case '*':
                printf("Twoja liczba to: %d.", num * num2);
                i = 0;
                break;
            case '/':
                printf("Twoja liczba to: %d.", num / num2);
                i = 0;
                break;
            default:
                printf("Enter operator, try again: ");
                scanf("%c", &operator);
                i = 1;
                break;
        }    
    }while(i == 1);
    printf("\n");
    
    return 0;
}