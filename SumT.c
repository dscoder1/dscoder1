#include<stdio.h>
//Find Sum AND Subtraction In Sorted Array
int main(){
int arr[100],size,Sum,Sub,flag=0,start,end;
printf("\nEnter Size Of Array(1-100):");
scanf("%d",&size);
printf("\nEnter Elements Of Array:");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
printf("\nElements Are:");
for(int i=0;i<size;i++){
printf("%d ",arr[i]);
}
printf("\nEnter Sum:");
scanf("%d",&Sum);

//More TIME COMPLEXITY=O(n*n) For Sum

for(int i=0;i<size-1;i++){
for(int j=i+1;j<size;j++){
if(arr[i]+arr[j]==Sum){
printf("\nSum Is Present Checked By Nested Loop Method\n");
printf("\nElement Is %d and %d Present At %d And %d Index\n",arr[i],arr[j],i,j);
flag=1;
break;
}
}
}
if(flag==0){
printf("\nSum Is Not Present Checked By Nested Loop Method\n");
}

//Two Pointer Approach We Search This In One Loop And In Single Traverse For Sum
//TIME COMPLEXITY=O(n)
flag=0;
start=0,end=size-1;
while(start<end){
if(arr[start]+arr[end]==Sum){
printf("\nSum Is Present Checked By Two Pointer Approach:\n");
printf("\nElement Is %d and %d and Present At %d and %d\n",arr[start],arr[end],start,end);
flag=1;
break;
}
else if(arr[start]+arr[end]<Sum){
start++;
}
else{
end--;
}
}
if(flag==0){
printf("\nSum Is Not Present Checked By Two Pointer Approach\n");
}

printf("\nEnter SuBtraction:\n");
scanf("%d",&Sub);
//More TIME COMPLEXITY=O(n*n) For Subtraction
flag=0;
for(int i=0;i<size-1;i++){
for(int j=i+1;j<size;j++){
if(arr[j]-arr[i]==Sub){
printf("\nSubtraction Is Present Checked By Nested Loop Method:\n");
printf("\nElement Is %d and %d Present At Index %d And %d \n",arr[j],arr[i],j,i);
flag=1;
break;
}
}
}
if(flag==0){
printf("\nSubtraction Is Not Present Checked By Nested Loop Method\n");
}

//Two Pointer Approach We Search This In One Loop And In Single Traverse For Subtraction
//TIME COMPLEXITY=O(n)
flag=0;
start=0,end=size-1;
while(start<end){
if(arr[end]-arr[start]==Sub){
printf("\nSubtraction Is Present Checked By Two Pointer Approach:\n");
printf("\nElement Is %d and %d and Present At Index %d and %d\n ",arr[end],arr[start],end,start);
flag=1;
break;
}
else if(arr[end]-arr[start]>Sub){
start++;
}
else{
end--;
}
}
if(flag==0){
printf("\nSubtraction Is Not Present Checked By Two Pointer Approach\n");
}
return 0;
}
