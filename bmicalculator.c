#include<stdio.h>
int main(){
    float weight, height, bmi;

    printf("Enter your weight(kgs): ");
    scanf("%f", &weight);

    printf("Enter your height(m): ");
    scanf("%f", &height);

    bmi = (weight/(height * height));

    printf("Your BMI is %f", bmi);

    if(bmi<18.5) {
        printf("U are underweight");
    }
    else if(bmi>=18.5 && bmi <25.0){
    printf("You are healthy");
    }
    else if(bmi>=25.0 && bmi< 30.0){
    printf("You are Overweight");
    }
    else
    {
    printf("You are obese");    
    }
    return 0;
}
