#include<stdio.h>
#include<stdlib.h>
struct Special{
int val;
struct Special *next;
};
struct Special *Head=NULL,*Head1=NULL,*Tail=NULL,*Tail1=NULL,*temp1,*temp2;
struct Special* Create1(){
int data;
char ch;
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
int main(){
int choice;
printf("\nSpecial Singly Linked List");
printf("\n1.Create 1st LinkedList\n2.Create 2nd LinkedList\n3.Display 1st LinkedList\n4.Display 2nd LinkedList\n5.Exit\n");
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
case 5:exit(0);
break;
default:printf("\nInvalid Choice");
}
}while(choice!=5);
return 0;
}
