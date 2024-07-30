#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int Cqueue[MAXSIZE],front=-1,rear=-1;
void Push(){
int data;
printf("\nEnter Data:");
scanf("%d",&data);
if(front==(rear+1)%MAXSIZE){
printf("\nQueue Is Full");
return;
}
else if(front==-1 && rear==-1){
front=0;
rear=0;
}
else{
rear=(rear+1)%MAXSIZE;
}
Cqueue[rear]=data;
}
void Pop(){
int data,flag=1;
data=Cqueue[front];
if(front==-1 && rear==-1){
printf("\nCircular Queue Is Full Empty");
flag=0;
return;
}
else if(front==rear){
front=-1;
rear=-1;
}
else{
front=(front+1)%MAXSIZE;
}
if(flag==1)
printf("\n%d Is Deleted From Circular Queue",data);
}
void Display(){
if(rear==-1 && front==-1){
printf("\nCircular Queue Is Full Empty");
return;
}
for(int i=front;i<=rear;i=(i+1)%MAXSIZE){
printf("%d ",Cqueue[i]);
}
}
/*
void Push_Front(){
int arr[MAXSIZE],data,j=0;
printf("\nEnter Data:");
scanf("%d",&data);
if(rear==-1 && front==-1){
printf("\nCircular Queue Is Totally Empty");
return;
}
else if(rear==(front+1)%MAXSIZE){
printf("\nQueue Is Full");
}
else{
for(int i=front;i<=rear;i=(i+1)%MAXSIZE){
arr[j]=Cqueue[i];
j++;
}
}
printf("\nElement Present Before Insertion\n");
for(int i=0;i<j;i++){
printf("%d ",arr[i]);
}
Cqueue[0]=data;
rear=(rear+1)%MAXSIZE;
j++;
//Copy Element Into Cqueue
for(int i=1;i<j;i=(i+1)%MAXSIZE){
Cqueue[i]=arr[i-1];
}
}
*/
void Pop_Rear(){
int data,flag=1;
data=Cqueue[rear];
if(rear==-1 && front==-1){
printf("\nCircular Queue Is Full Empty");
flag=0;
return;
}
else if(rear==front){
rear==-1;
front==-1;
}
else{
rear=(rear-1)%MAXSIZE;
}
if(flag==1)
printf("\n%d Is Deleted From Circular Queue",data);
}
int main(){
int choice;
printf("\nCIRCULAR QUEUE IMPLEMENTATION");
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.POP FROM REAR\n5.EXIT\n");
do{
printf("\nEnter Choice:");
scanf("%d",&choice);
switch(choice){
case 1:Push();
break;
case 2:Pop();
break;
case 3:Display();
break;
//case 4:Push_Front();
//break;
case 4:Pop_Rear();
break;
case 5:exit(0);
break;
default:printf("\nInvalid Choice");
}
}while(choice!=5);
return 0;
}

