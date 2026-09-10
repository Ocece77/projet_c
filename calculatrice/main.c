#include <stdio.h>

int main(){
    printf("Calculatrice ! \n");

    double firstNumber = 0;
    double secondNumber = 0;
    double result = 0 ;
    char operator;


    // Ask to the user the first number
    printf("Type the first number : \n");
    scanf("%lf", &firstNumber);

    printf("Your first number is: %lf \n", firstNumber );

    //Ask the user the second number int only !
    printf("Type the second nubmer: \n");
    scanf("%lf" , &secondNumber);

    printf("Your second number is : %lf \n" , secondNumber);

    //ask the user the operator he wants to use
    printf("Which operator do you want to use : \n +  ;  -  ;  / ;  * \n");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
             result = firstNumber + secondNumber;
             break;
        case '-':
             result = firstNumber - secondNumber;
             break;
        case '/':
             result = firstNumber / secondNumber;
             break;  
        case '*':
             result = firstNumber * secondNumber;
             break;                 
    }

    printf("The result is :  %lf \n", result);


    return 0;
}
