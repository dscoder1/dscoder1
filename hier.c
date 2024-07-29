#include<stdio.h>
#include<stdlib.h>
struct tree{
struct tree *ladd;
struct tree *radd;
int val;
};
struct tree *start=NULL,*temp;
void create(struct tree *new,struct tree *head);
void Inorder(struct tree *Head);
void Postorder(struct tree *Head);
void Preorder(struct tree *Head);
void FindR();
int main(){
int choice;
char choose;
printf("TREE IMPLEMENTATION\n\n");
printf("1.Create\n2.Inorder\n3.Postorder\n4.Preorder\n5.Find Root Node Value\n6.Exit\n");
do{
printf("\nPlease Choose Option:");
scanf("%d",&choice);
switch(choice){
case 1:do{
int data;
printf("\nEnter Data:");
scanf("%d",&data);
struct tree *node=(struct tree*)malloc(sizeof(struct tree));
node->ladd=NULL;
node->radd=NULL;
node->val=data;
if(start==NULL){
start=node;
}
else{
create(node,start);
}
printf("\nContinue:");
scanf(" %c",&choose);
}while(choose=='Y' || choose=='y');
break;
case 2:printf("\nINORDER REPRESENTATION IS:");
Inorder(start);
break;
case 3:printf("\nPREORDER REPRESENTATION IS:");
Preorder(start);
break;
case 4:printf("\nPOSTORDER REPRESENTATION IS:");
Postorder(start);
break;
case 5:FindR();
break;
case 6:printf("\n\nEXIT");
exit(0);
break;
default:printf("\nWrong Choice:");
}
}while(choice!=6);
return 0;
}

void create(struct tree *new,struct tree *head){
if(new->val>head->val){
if(head->radd==NULL){
head->radd=new;
}
else{
create(new,head->radd);
}
}
else if(new->val<head->val){
if(head->ladd==NULL){
head->ladd=new;
}
else{
create(new,head->ladd);
}
}
else{
printf("\nDuplicate Not Exits:");
}
}
void Inorder(struct tree *Head){
if(!Head)return;
Inorder(Head->ladd);
printf("%d ",Head->val);
Inorder(Head->radd);
}


void Postorder(struct tree *Head){
if(!Head)return;
Postorder(Head->ladd);
Postorder(Head->radd);
printf("%d ",Head->val);
}


void Preorder(struct tree *Head){
if(!Head)return;
printf("%d ",Head->val);
Preorder(Head->ladd);
Preorder(Head->radd);
}


void FindR(){
if(start==NULL){
printf("\nNothing Is Present In Root Node");
}
else{
printf("\n%d Is Root Of Tree AND %d Is Left Value Of Root And %d Is Right Value Of Root",start->val,start->ladd->val,start->radd->val);
}
}
