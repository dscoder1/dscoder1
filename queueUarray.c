#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
int queue[MAXSIZE],front=0,rear=-1;
//INSERTING VALUES INTO QUEUE
void Insert(){
if(rear==MAXSIZE-1){
printf("\nQueue Is Full");
return;
}
else{
int data;
printf("\nEnter Data:");
scanf("%d",&data);
rear++;
queue[rear]=data;
}
}
//DELETING VALUES FROM QUEUE
void Delete(){
int val;
if(rear==-1 && front>rear){
printf("\nQueue Is Empty");
return;
}
else if(rear==front){
val=queue[front];
printf("\nDeleted Element Is %d:",val);
rear=-1;
front=0;
return;
}
else{
val=queue[front];
front++;
printf("\nDeleted Element Is %d:",val);
}
}
//DISPLAYING VALUES OF QUEUE
void Display(){
if(rear==-1){
printf("\nNothing Is Present To Display");
return;
}
else{
printf("\nElements In Queue IS:");
for(int i=front;i<=rear;i++){
printf("\n%d ",queue[i]);
}
}
}
//REVERSING QUEUE
void Reverse(){
int arr1[MAXSIZE],j=0;
if(rear==-1){
printf("\nQueue Is Totally Empty");
return;
}
else{
for(int i=rear;i>=0;i--){
arr1[j]=queue[i];
j++;
}
for(int i=0;i<=rear;i++){
queue[i]=arr1[i];
}
}
}
//SIZE OF QUEUE
int Size(){
if(rear==-1){
printf("\nQueue Is Fully Empty");
return 0;
}
else{
printf("\nSize Of Queue Is:%d",rear-front+1);
return rear-front+1;
}
}
//CAPACITY OF QUEUE
void Capacity(){
printf("%d Is Capacity Of Queue",MAXSIZE);
}
void Insert_Top(){
int val;
if(rear==-1){
printf("Queue Is Totally Empty");
}
else{
printf("\nEnter Element To Insert:");
scanf("%d",&val);
rear++;
queue[rear]=val;
}
}
//DELETING FROM REAR
void Delete_Rear(){
if(rear==-1){
printf("\nQueue Is Fully Empty");
return;
}
else{
int val=queue[rear];
rear--;
printf("\nDeleted Element Is %d",val);
}
}
//INSERTING FROM FRONT
void Insert_Front(){
int data,arr1[MAXSIZE];
if(rear==-1){
printf("\nQueue Is Fully empty");
return;
}
else{
printf("\nEnter data:");
scanf("%d",&data);
for(int i=0;i<=rear;i++){
arr1[i]=queue[i];
}
queue[0]=data;
rear++;
for(int i=0;i<=rear-1;i++){
queue[i+1]=arr1[i];
}
}
}
void mid(){
int middle=Size();
int midd=middle/2;
if(rear==-1){
printf("\nQueue Is Totally Full");
}
else{
if(middle%2==1){
printf("\nOdd Nu8mber Of Elements Are Present");
printf("\nMiddle Element Is %d:",queue[midd]);
}
else{
printf("\nEven Number Of ElementS are Present");
printf("\nLeft Middle Element Is %d and Right Middle Element Is %d",queue[midd-1],queue[midd]);
}
}
}
//MAIN FUNCTION
int main(){
int choice;
printf("\nQueue Implementation");
printf("\n1.Insert Element Into Queue\n2.Delete Element From Queue\n3.Display\n4.Reverse The Queue\n5.Find Size Of Queue\n6.Find Capacity Of Queue\n7.Insert From Top\n8.Delete From Rear End\n9.Insert From Front\n10.Find Middle Of Queue\n11.Exit\n");
do{
printf("\nEnter Your Choice:");
scanf("%d",&choice);
switch(choice){
case 1:Insert();
break;
case 2:Delete();
break;
case 3:Display();
break;
case 4:Reverse();
break;
case 5:Size();
break;
case 6:Capacity();
break;
case 7:Insert_Top();
break;
case 8:Delete_Rear();
break;
case 9:Insert_Front();
break;
case 10:mid();
break;
case 11:exit(0);
break;
default:printf("\nInvalid Choice");
}
}while(choice!=11);
return 0;
}
//END
