#include<stdio.h>
int main() {
float C, F;

printf("Enter the temperature in Celsius: ");
scanf("%d", &C);

F = ((C * 9/5) + 32);

printf("The temperature in Fahrenhit is %f", F);
return 0;

}
