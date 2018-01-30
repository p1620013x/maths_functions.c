//This is the line causing issue in the conflict branch1
//This is the second line causing issue in the <*master/conflict> branch
#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, subtractTwoNumbers;
    
    printf("Enter two integers: ");

    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);

    // sum of two numbers in stored in variable sumOfTwoNumbers
    subtractTwoNumbers = firstNumber - secondNumber;

    // Displays sum      
    printf("%d - %d = %d\n", firstNumber, secondNumber, subtractTwoNumbers);

    return 0;
}