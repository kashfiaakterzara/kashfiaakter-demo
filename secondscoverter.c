#include<stdio.h>
int main(){
int total, seconds, minutes, hours;

printf("Enter a number of seconds: ");
scanf("%d", &total);

hours = total / 3600;  // 1 hours = 3600 seconds
minutes = (total % 3600) / 60;
seconds = total % 60;
printf("%d seconds = %d hour(s), %d minute(s), %d second(s)\n", total, hours, minutes, seconds);

return 0;
}