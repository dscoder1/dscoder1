#include<stdio.h>
int main(){
int num,org,rem,base=1,bin=0;
printf("\nEnter Decimal Number:");
scanf("%d",&num);
org=num;
while(num!=0){
rem=num%2;
bin=bin+rem*base;
num=num/2;
base=base*10;
}
printf("The Binary Of %d is %d:",org,bin);
return 0;
}
