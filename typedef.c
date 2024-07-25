#include<stdio.h>
typedef float F;
typedef int I;
int main(){
F num;
I num1;
printf("\nEnter First Number:");
scanf("%f",&num);
printf("\nEnter Second Number:");
scanf("%d",&num1);
printf("\n\nInformation\n\n");
printf("%.2f %d",num,num1);
return 0;
}
