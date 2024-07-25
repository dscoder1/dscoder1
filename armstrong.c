#include<stdio.h>
int main(){
int rem,num,org,chck=0;
printf("Enter A Number:");
scanf("%d",&num);
org=num;
while(num!=0){
rem=num%10;
chck=chck+(rem*rem*rem);
num=num/10;
}
if(org==chck){
printf("%d is ARMSTRONG NUMBER",org);
}
else{
printf("%d is Not A ARMSTRONG NUMBER",org;
}
return 0;
}
