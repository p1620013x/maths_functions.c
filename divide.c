#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, divideOfTwoNumbers;
    
    printf("Enter two integers: ");

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    divideOfTwoNumbers = firstNumber / secondNumber;

    // Displays sum      
    printf("%d / %d = %d\n", firstNumber, secondNumber, divideOfTwoNumbers);

    return 0;
}