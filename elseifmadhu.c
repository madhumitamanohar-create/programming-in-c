#include <stdio.h>
#include <stdlib.h>

int main()
{
int m1,m2,m3,m4,m5;
printf("Enter the 5 subject marks=");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
int marks=((m1+m2+m3+m4+m5)/5);
if(marks>=90){
printf("Grade A");
}
else if(marks>=75){
printf("Grade B");
}
else if(marks>=60){
printf("Grade C");
}
else if(marks>=50){
printf("Grade D");
}
 else{
printf("Grade F");
}
return 0;
}
