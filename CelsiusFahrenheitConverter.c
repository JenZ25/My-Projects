#include <stdio.h>
#include <ctype.h>
int main(){

      
   
    char unit;
    float temp;

    unit = toupper(unit);


    printf("Is the Temperature in (C) or (F)?");
    scanf("%c", &unit);
   


    if(unit== 'C'){
       printf("Enter the temperature in Celsius: ");
       scanf("%f", &temp);
       temp = (temp * 9 / 5) + 32;
       printf("The temperature in Fahrenheit is %0.1f",temp);
    }
    else if (unit== 'F'){
       printf("Enter the temperature in Fahrenheit: ");
       scanf("%f", &temp);
       temp = ((temp - 32) * 5) / 9;
       printf("The temperature in Celsius is %0.1f",temp);
    }
    else{
      printf("\n %c is not a valid unit to calculate temperature",unit);
    }   
return 0;
}

