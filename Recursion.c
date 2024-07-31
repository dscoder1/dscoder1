/*
//FACTORIAL OF A NUMBER USING RECURSION
#include<stdio.h>
int fact(int num){
if(num==0 || num==1){
return 1;
}
else{
return num*fact(num-1);
}
}
int main(){
int num,ans;
printf("\nEnter Number You Want To Find Factorial:");
scanf("%d",&num);
ans=fact(num);
printf("\nFactorial Of %d Is %d:",num,ans);
return 0;
}

//SUM OF NUMBER USING RECURSION
#include<stdio.h>
int sum(int num){
if(num==1){
return 1;
}
else{
return num+sum(num-1);
}
}
int main(){
int num,ans;
printf("\nEnter A Number:");
scanf("%d",&num);
ans=sum(num);
printf("\nSum Is:%d",ans);
return 0;
}


//FIBONACCI SERIES USING RECURSION
#include<stdio.h>
int fibo(int num){
if(num==0){
return 0;
}
if(num==1 || num==2){
return 1;
}
else{
return fibo(num-2)+fibo(num-1);
}
}
int main(){
int num,ans;
printf("\nEnter Nth Fibonacci Series:");
scanf("%d",&num);
ans=fibo(num);
printf("%d Is %d Term Of This Series",ans,num);
return 0;
}


//PRINT FROM N TO 1
#include<stdio.h>
void print(int num){
if(num==0){
return;
}
printf("%d ",num);
print(num-1);
}
int main(){
int num;
printf("\nEnter Number You Want To Print From Number To 1:");
scanf("%d",&num);
print(num);
return 0;
}

//PRINT NUMBER FROM 1 TO NUMBER
#include<stdio.h>
void print(int num){
if(num==0){
return;
}
else{
print(num-1);
printf("%d ",num);
}
}
int main(){
int num;
printf("\nEnter Number You Want To Print 1 To Number:");
scanf("%d",&num);
print(num);
return 0;
}
*/










