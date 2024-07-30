#include<stdio.h>
#include<stdlib.h>
struct Sull{
int val;
struct Sull *next;
};
struct Sull *Head=NULL,*tail=NULL,*temp;
void Push(){
int data;
printf("\nEnter Data You Want To Insert:");
scanf("%d",&data);
temp=(struct Sull*)malloc(sizeof(struct Sull));
temp->val=data;
temp->next=NULL;
if(Head==NULL){
Head=temp;
tail=temp;
}
else{
temp->next=Head;
Head=temp;
}
}
void Pop(){
int del;
if(Head==NULL){
printf("\nStack Is Totally Empty");
return;
}
else{
del=Head->val;
Head=Head->next;
printf("\n%d Is Deleted From Stack",del);
}
}
void Display(){
struct Sull *temp1=Head;
if(temp1==NULL){
printf("\nStack Is Totally Empty");
return;
}
else{
while(temp1!=NULL){
printf("%d ",temp1->val);
temp1=temp1->next;
}
}
}
void Push_B(){
int data;
printf("\nEnter Element You Want To Insert:");
scanf("%d",&data);
struct Sull *temp2=(struct Sull*)malloc(sizeof(struct Sull));
temp2->val=data;
temp2->next=NULL;
if(Head==NULL){
printf("\nLinked List Is Full Empty");
}
else{
tail->next=temp2;
tail=temp2;
}
}
void Pop_B(){
temp=Head;
struct Sull *prev;
if(Head==NULL){
printf("\nList Is Empty");
return;
}
else{
while(temp->next!=NULL){
prev=temp;
temp=temp->next;
}
prev->next=NULL;
printf("%d Is Deleted From Linked List",temp->val);
}
}
int main(){
int choice;
printf("\nStack Using Linked List");
printf("\n1.Push\n2.Pop\n3.Display\n4.Push From Bottom\n5.Pop From Bottom\n6.Exit\n");
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
case 4:Push_B();
break;
case 5:Pop_B();
break;
case 6:exit(0);
break;
default:printf("\nInvalid Choice");
}
}while(choice!=6);
return 0;
}
