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
    switch(operator)
    {
        case '+':
            printf("Twoja liczba to: %d.", num + num2);
            break;
        case '-':
            printf("Twoja liczba to: %d.", num - num2);
            break;
        case '*':
            printf("Twoja liczba to: %d.", num * num2);
            break;
        case '/':
            printf("Twoja liczba to: %d.", num / num2);
        default:
            break;
    }
    printf("\n");
    return 0;
}