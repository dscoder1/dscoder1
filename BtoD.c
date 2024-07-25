#include<stdio.h>
int main(){
int num,rem,dec=0,base=1,org;
printf("\nEnter A Number:");
scanf("%d",&num);
org=num;
while(num!=0){
rem=num%10;
dec=dec+rem*base;
base=base*2;
num=num/10;
}
printf("Decimal Of %d Is %d",org,dec);
return 0;
}
