#include <stdio.h>

int main(){
    float userTemp = 0;
    char userUnity ;
    float result;
    printf("Convertisseur ! \n");

    /* 
    Convert kelvin to degrees or the reverse depending of the user choice
    kelvin =  °c + 273,15 
    °c =   kelvin - 273,15 
    */

    printf("Enter the temperatures: \n");
    scanf(" %f" , &userTemp);

    printf("In which unity is your temperatures? : \n - For Kelvin (K) type k  \n - For Degrees (°c) type c \n ");
    scanf(" %c" , &userUnity);

    if (userUnity == 'K' || userUnity == 'k'){
        printf("This will be converted in degrees \n");

        result = userTemp - 273.15 ;
        printf("%.2f k is %.2f °c", userTemp, result);
    } else if (userUnity == 'C' || userUnity == 'c'){
        printf("This will be converted in Kelvin. \n");

        result = userTemp + 273.15 ;
        printf("%.2f °c is %.2f k", userTemp, result);
    } else {
        printf("Invalid choice \n Try again. \n");
    }
    return 0;
}