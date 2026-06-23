#include<stdio.h>
int main(){
    float weight, height, bmi;

    printf("Enter your weight(kgs): ");
    scanf("%f", &weight);

    printf("Enter your height(m): ");
    scanf("%f", &height);

    bmi = (weight/(height * height));

    printf("Your BMI is %f", bmi);
    return 0;
}