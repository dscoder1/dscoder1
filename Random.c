#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number,guess;
srand(time(0));
while(1){
number=rand()%100+1;
printf("\nEnter Number:");
scanf("%d",&guess);
if(number==guess){
printf("\nGuess And Random Number Is Correct %d",number);
}
else if(number>guess){
printf("\nRandom Number Is %d More Than Guess Number %d",number,guess);
}
else{
printf("\nRandom Number Is %d Less Than Guess Number %d",number,guess); 
}
}
return 0;
}
