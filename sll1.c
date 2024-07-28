#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *next;
int val;
};
struct node *head=NULL,*tail=NULL,*new,*temp,*temp1;
void create();
void display();
void Reverse(struct node *head);
void middle(struct node *head);
int size();
int main(){
int choice;
printf("\nSINGLY LINKED LIST IMPLEMENTATION");
printf("\n1.Create\n2.Display\n3.Reverse\n4.Middle Node\n5.Size\n6.Exit\n");
do{
printf("\nEnter Your Choice:");
scanf("%d",&choice);
switch(choice){
case 1:create();
break;
case 2:display();
break;
case 3:Reverse(head);
break;
case 4:middle(head);
break;
case 5:size();
break;
case 6:exit(0);
break;
default:printf("\nInvalid Option");
}
}while(choice!=6);
return 0;
}
void create(){
int data;
char ch;
printf("\nEnter Data:\n");
scanf("%d",&data);
temp=(struct node *)malloc(sizeof(struct node));
temp->val=data;
temp->next=NULL;
head=temp;
tail=temp;
printf("\nDO YOU WANT TO CONTINUE:\n");
scanf(" %c",&ch);
while(ch=='y' || ch=='Y'){
printf("\nEnter Data:");
scanf("%d",&data);
temp1=(struct node *)malloc(sizeof(struct node));
temp1->val=data;
temp1->next=NULL;
tail->next=temp1;
tail=tail->next;
printf("\nContinue:");
scanf(" %c",&ch);
}
}
void Reverse(struct node *head1){
if(head1==NULL){
return;
}
Reverse(head1->next);
printf("%d ",head1->val);
}
void middle(struct node *head1){
if(head1==NULL){
printf("\nNOT ABLE TO FIND MIDDLE ELEMENTS:");
}
else if(head1->next==NULL || head1->next->next == NULL){
printf("\nMiddle Element Is %d",head1->val);
}
else{
struct node *prev=head1;
struct node *slow=head1;
struct node *fast=head1;
if(size()%2==1){
while(fast!=NULL && fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}
printf("\nMiddle Element Is %d",slow->val);
}
else{
if(size()%2==0){
while(fast!=NULL && fast->next!=NULL){
prev=slow;
slow=slow->next;
fast=fast->next->next;
}
printf("\nLeft Middle Element Is %d",prev->val);
printf("\nRight Middle Element Is %d",slow->val);
}
}
}
}
int size(){
new=head;
int size1=0;
if(new==NULL){
printf("\nSize=0");
}
else{
printf("\nSIZE ARE:");
while(new!=NULL){
size1++;
new=new->next;
}
printf(" SIZE--> %d",size1);
return size1;
}
}
void display(){
new=head;
if(new==NULL){
printf("\nYOU NOT DISPLAY");
}
else{
printf("\nELEMENTS ARE:");
while(new!=NULL){
printf("%d ",new->val);
new=new->next;
}
printf("\n\n%d",head->val);
}
}
