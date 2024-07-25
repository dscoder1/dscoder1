#include<stdio.h>
int main(){
int num,rev=0,org=0,rem;
printf("Enter A Number:");
scanf("%d",&num);
org=num;
while(num!=0){
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
if(org==rev){
printf("%d is A Palindrome Number",org);
}
else{
printf("%d is Not a palindrome number",org);
}
return 0;
}
