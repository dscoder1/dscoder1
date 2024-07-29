#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
int arr[MAXSIZE],top=-1;
void push(){
int data;
if(top==MAXSIZE-1){
printf("\nStack Is Full\n");
return;
}
else{
printf("\nEnter Number You Want To Push:\n");
scanf("%d",&data);
top++;
arr[top]=data;
}
}
void pop(){
int data;
if(top==-1){
printf("\nStack Is Totally Empty");
return;
}
else{
data=arr[top];
top--;
printf("\n%d Is Deleted From Stack",data);
}
}
void display(){
if(top==-1){
printf("\nStack Is Totally Empty");
return;
}
else{
printf("\nElements Are:\n");
for(int i=0;i<=top;i++){
printf("%d ",arr[i]);
}
}
}
void capacity(){
printf("\nCapacity Of Stack Is %d",MAXSIZE);
}
int size(){
if(top==-1){
printf("\nSize Of Stack Is %d",top+1);
return 0;
}
else{
printf("\nSize Of Stack Is %d",top+1);
}
return top+1;
}
void peek(){
if(top==-1){
printf("\nStack Is Fully Empty");
return;
}
else{
printf("\nTop Of Stack:%d",arr[top]);
}
}
void reverse(){
int arr1[MAXSIZE],j=0;
if(top==-1){
printf("\nStack Is Fully Empty");
return;
}
else{
for(int i=top;i>=0;i--){
arr1[j]=arr[i];
j++;
}
for(int i=0;i<=top;i++){
arr[i]=arr1[i];
}
printf("\nIn Reverse:");
for(int i=0;i<=top;i++){
printf("%d ",arr[i]);
}
}
}
void mid(){
int total=size();
int middle=total/2;
if(top==-1){
printf("\nStack Is Fully Empty");
return;
}
else{
if(total%2==1){
printf("\nOdd Number Of Element Is Present");
printf("\nMiddle Element Is %d",arr[middle]);
}
else{
printf("\nEven Number Of Element Is Present");
printf("\nLeft Middle Is %d and Right Middle Is %d",arr[middle-1],arr[middle]);
}
}
}
void search(){
int search;
if(top==-1){
printf("\nStack Is Totally empty");
return;
}
else{
printf("\nEnter Element You Want To Search:");
scanf("%d",&search);
for(int i=0;i<=top;i++){
if(search==arr[i]){
printf("\nElement Is Present At %d Position",i+1);
return;
}
}
}
printf("\nElement Is Not Present");
}
void Push_Bottom(){
int arr1[MAXSIZE],j=0,data;
if(top==-1){
printf("\nStack Is Totally Empty");
return;
}
else{
printf("\nEnter Data You Want To Push At Bottom:");
scanf("%d",&data);
for(int i=0;i<=top;i++){
arr1[j]=arr[i];
j++;
}
arr[0]=data;
for(int i=1;i<=top+1;i++){
arr[i]=arr1[i-1];
}
}
top++;
printf("\nDisplay Stack After Inserting Element At Bottom:");
for(int i=0;i<=top;i++){
printf("%d ",arr[i]);
}
}
void Pop_bottom(){
int arr1[MAXSIZE],val,j=0;
if(top==-1){
printf("\nStack Is Fully Empty");
return;
}
else{
for(int i=1;i<=top;i++){
arr1[j]=arr[i];
j++;
}
val=arr[0];
printf("\n%d Is Deleted From Stack",val);
for(int i=0;i<=top-1;i++){
arr[i]=arr1[i];
}
}
top--;
}
int main(){
int choice;
printf("\nStack Implementation Using Array");
printf("\n1.Push Into Stack\n2.Pop Out From Stack\n3.Display Elements From Stack\n4.Size Of Stack\n5.Capacity Of Stack\n6.Top Of Stack\n7.Reverse Of Stack\n8.Middle of Stack\n9.Searching Elements From Stack\n10.Push From Bottom Of Stack\n11.Remove From Bottom Of Stack\n12.Exit From Stack\n\n");
do{
printf("\nEnter Your Choice:");
scanf("%d",&choice);
switch(choice){
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:size();
break;
case 5:capacity();
break;
case 6:peek();
break;
case 7:reverse();
break;
case 8:mid();
break;
case 9:search();
break;
case 10:Push_Bottom();
break;
case 11:Pop_bottom();
break;
case 12:exit(0);
break;
default:printf("\nInvalid Option Choose Again");
}
}while(choice!=12);
return 0;
}
