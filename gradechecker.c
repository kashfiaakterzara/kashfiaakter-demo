#include<stdio.h>
int main(){
float marks;
//char grade;(would need it if i was inputing the grade so code wont work)

//NSU GRADING SYSTEM GRADE CHECKER

printf("Enter the student's marks: ");
scanf("%f", &marks);

if(marks>=93) {
printf("You got A");    
}
else if(marks<93 && marks>=90){
  printf("You got A-");  
}

else if(marks<90 && marks>=87){
printf("You got B+");    
}

return 0;
}