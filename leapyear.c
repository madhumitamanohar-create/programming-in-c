#include <stdio.h>
#include <stdlib.h>

int main(){
int year;
printf("Enter 4 digit number");
scanf("%d",&year);
if((year%400==0) || (year%4==0 && year%100!=0)){
printf("%d is a leap year");
}else{
printf("%d is not a leap year");
}
return 0;
}
