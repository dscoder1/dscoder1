#include<stdio.h>
#include<stdlib.h>
//STRUCTURE OF LINKEDLIST
struct node{
struct node *next;
int val;
};
struct node *head=NULL,*tail=NULL,*new,*temp,*link,*link1,*temp1;

//FUNCTION PROTOTYPE
void create();
void display();
void Reverse(struct node *head);
void middle(struct node *head);
int size();
void del_middle();
void Nth();
void NthDel();
void RevLink();
//MAIN FUNCTION
int main(){
int choice;
printf("\nSINGLY LINKED LIST IMPLEMENTATION");
printf("\n1.Create\n2.Display\n3.Reverse\n4.Middle Node\n5.Size\n6.Deleting Middle\n7.Nth Node From End Of LinkedList\n8.Deleted Nth Node From LinkedList\n9.Reverse Link Of Node\n10.Exit\n");

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
case 6:del_middle();
break;
case 7:Nth();
break;
case 8:NthDel();
break;
case 9:RevLink();
break;
case 10:exit(0);
break;
default:printf("\nInvalid Option");
}
}while(choice!=10);
return 0;
}

//CREATE FUNCTION
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

//REVERSE FUNCTION
void Reverse(struct node *head1){
if(head1==NULL){
return;
}
Reverse(head1->next);
printf("%d ",head1->val);
}

//MIDDLE FUNCTION
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

//MIDDLE DELETION
void del_middle(){
link=head;
int del_mid;
if(head==NULL){
printf("\nDeletion Is Not Possible");
}
else if(head->next==NULL){
printf("\nDeleted Element Is %d",head->val);
head=NULL;
}
else{
struct node *slow=head;
struct node *fast=head;
while(fast->next->next!=NULL && fast->next->next->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}
del_mid=slow->next->val;
slow->next=slow->next->next;
printf("\nDeleted Element Is %d",del_mid);
}
}

//Nth NODE FROM END OF LINKEDLIST
void Nth(){
int end;
link=head;
printf("\nEnter Which Node You Want To Find From End:");
scanf("%d",&end);
if(head==NULL){
printf("\nNOTHING IS PRESENT");
}
else if(end==size()){
link=head;
printf("%d Element From End Is: %d",end,link->val);
}
else{
int n=size();
int m=n-end+1;
for(int i=0;i<m-1;i++){
link=link->next;
}
printf("%d Element From End Is: %d",end,link->val);
}
}

//DELETE Nth NODE FROM END OF LINKEDLIST
void NthDel(){
int end,n=size();
link=head;
printf("\nEnter Which Node You Want To Delete From End:");
scanf("%d",&end);
if(head==NULL){
printf("\nNOTHING IS PRESENT");
}
else if(end==n){
printf("%d Deleted Element From End Is: %d",end,head->val);
head=head->next;
}
else{
int m=n-end+1;
for(int i=0;i<m-2;i++){
link=link->next;
}
printf("%d Deleted Element From End Is: %d",end,link->next->val);
link->next=link->next->next;
}
}

//SIZE FUNCTION
int size(){
new=head;
int size1=0;
if(new==NULL){
printf("\nSize=0");
}
else{
while(new!=NULL){
size1++;
new=new->next;
}
return size1;
}
}

//REVERSING LINKS OF NODE
void RevLink(){
link=head;
if(link==NULL){
printf("\nNOTHING IS PRESENT TO REVERSE");
}
else if(link->next==NULL){
printf("\nLinklist is already in reverse");
}
else{
struct node *prev1=NULL;
struct node *curr=link;
struct node *next1=NULL;
while(curr!=NULL){
next1=curr->next;
curr->next=prev1;
prev1=curr;
curr=next1;
}
head=prev1;
while(head!=NULL){
printf("%d ",head->val);
head=head->next;
}
}
}
//DISPLAY FUNCTION
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
