#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, multiplyOfTwoNumbers;
    
    printf("Enter two integers: \n");

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    multiplyOfTwoNumbers = firstNumber * secondNumber;

    // Displays sum      
    printf("%d * %d = %d\n", firstNumber, secondNumber, multiplyOfTwoNumbers);

    return 0;
}