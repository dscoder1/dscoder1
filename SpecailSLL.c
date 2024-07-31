#include<stdio.h>
#include<stdlib.h>
struct Special{
int val;
struct Special *next;
};
struct Special *Head=NULL,*Head1=NULL,*Tail=NULL,*Tail1=NULL,*merge1=NULL,*Ssorting=NULL,*temp1,*temp2;
struct Special* Create1(){
int data;
char ch;
printf("\nInserting Values To First Linked List");
printf("\nEnter Data:");
scanf("%d",&data);
temp1=(struct Special *)malloc(sizeof(struct Special));
temp1->val=data;
temp1->next=NULL;
if(Head==NULL){
Head=temp1;
Tail=temp1;
}
printf("\nContinue:");
scanf(" %c",&ch);
while(ch=='y' || ch=='Y'){
printf("\nEnter Data:");
scanf("%d",&data);
temp1=(struct Special *)malloc(sizeof(struct Special));
temp1->val=data;
temp1->next=NULL;
Tail->next=temp1;
Tail=Tail->next;
printf("\nContinue:");
scanf(" %c",&ch);
}
return Head;
}


struct Special* Create2(){
int data;
char ch;
printf("\nInserting Values To Second Linked List");
printf("\nEnter Data:");
scanf("%d",&data);
temp2=(struct Special *)malloc(sizeof(struct Special));
temp2->val=data;
temp2->next=NULL;
if(Head1==NULL){
Head1=temp2;
Tail1=temp2;
}
printf("\nContinue:");
scanf(" %c",&ch);
while(ch=='y' || ch=='Y'){
printf("\nEnter Data:");
scanf("%d",&data);
temp2=(struct Special *)malloc(sizeof(struct Special));
temp2->val=data;
temp2->next=NULL;
Tail1->next=temp2;
Tail1=Tail1->next;
printf("\nContinue:");
scanf(" %c",&ch);
}
return Head1;
}

void Display(struct Special *Head2){
temp1=Head2;
if(temp1==NULL){
printf("\nList Is Totally Empty");
return;
}
while(temp1!=NULL){
printf("\n%d",temp1->val);
temp1=temp1->next;
}
}
void Del1(struct Special *del){
int data;
struct Special *prev;
temp1=del;
if(temp1==NULL){
printf("\n1st Linked List Is Fully Empty");
return;
}
else if(temp1->next==NULL){
printf("\n%d Is Deleted From Linked List",temp1->val);
Head=NULL;
Tail=NULL;
return;
}
else{
while(temp1->next!=NULL){
prev=temp1;
temp1=temp1->next;
}
printf("\n%d Is Deleted From LinkedList:",temp1->val);
prev->next=NULL;
Tail=prev;
}
}
void Del2(struct Special *del){
int data;
struct Special *prev;
temp1=del;
if(temp1==NULL){
printf("\n2nd Linked List Is Fully Empty");
return;
}
else if(temp1->next==NULL){
printf("\n%d Is Deleted From Linked List",temp1->val);
Head1=NULL;
Tail=NULL;
return;
}
else{
while(temp1->next!=NULL){
prev=temp1;
temp1=temp1->next;
}
printf("\n%d Is Deleted From LinkedList:",temp1->val);
prev->next=NULL;
Tail1=prev;
}
}
struct Special * merge(struct Special *Head,struct Special *Head1){
struct Special *merge;
if(Head==NULL && Head1==NULL){
printf("\nTotally Empty Both List");
return merge;
}
else if(Head==NULL){
merge=Head1;
return merge;
}

else if(Head1==NULL){
merge=Head;
return merge;
}

else{
Tail->next=Head1;
merge=Head;
return merge;
}
}

void Del_merge(struct Special *del){
int data;
struct Special *prev;
temp1=del;
if(temp1==NULL){
printf("\nLinked List Is Fully Empty");
return;
}
else if(temp1->next==NULL){
printf("\n%d Is Deleted From Linked List",temp1->val);
merge1=NULL;
return;
}
else{
while(temp1->next!=NULL){
prev=temp1;
temp1=temp1->next;
}
printf("\n%d Is Deleted From LinkedList:",temp1->val);
prev->next=NULL;
}
}
struct Special *Sort(struct Special *Head,struct Special *Head1){
temp1=Head,temp2=Head1;
struct Special *sorting=NULL;
if(temp1==NULL && temp2==NULL){
printf("\nTotal Empty");
return Head;
}
else if(temp1==NULL){
return temp2;
}
else if(temp2==NULL){
return temp1;
}
else{
if(temp1->val>temp2->val){
sorting=temp2;
temp2=sorting->next;
}
else{
sorting=temp1;
temp1=sorting->next;
}
}
Ssorting=sorting;
while(temp1 && temp2){
if(temp1->val>temp2->val){
sorting->next=temp2;
sorting=temp2;
temp2=sorting->next;
}
else{
sorting->next=temp1;
sorting=temp1;
temp1=sorting->next;
}
}
if(temp2==NULL){
sorting->next=temp1;
}
if(temp1==NULL){
sorting->next=temp2;
}
return Ssorting;
}
int main(){
int choice;
printf("\nSpecial Singly Linked List");
printf("\n1.Create 1st LinkedList\n2.Create 2nd LinkedList\n3.Display 1st LinkedList\n4.Display 2nd LinkedList\n5.Pop From 1st LinkedList\n6.Pop From 2nd LinkedList\n7.Merging Both List\n8.Display The Merged List\n9.Sorting Linked List\n10.Displaying sorted Linked List\n11.Exit\n");
do{
printf("\nEnter Choice:");
scanf("%d",&choice);
switch(choice){
case 1:Head=Create1();
break;
case 2:Head1=Create2();
break;
case 3:Display(Head);
break;
case 4:Display(Head1);
break;
case 5:Del1(Head);
break;
case 6:Del2(Head1);
break;
case 7:merge1=merge(Head,Head1);
break;
case 8:Display(merge1);
break;
case 9:Del_merge(merge1);
break;
case 10:Ssorting=Sort(Head,Head1);
break;
case 11:Display(Ssorting);
break;
case 12:exit(0);
break;
default:printf("\nInvalid Choice");
}
}while(choice!=12);
return 0;
}
