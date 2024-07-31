#include<stdio.h>
int main(){
int mat[10][10],flag=1,row,column;
printf("\nEnter Row For 1st Matrix:");
scanf("%d",&row);
printf("\nEnter Column For 1st Matrix:");
scanf("%d",&column);
if(row!=column){
printf("\nNot A Upper Traingular Matrix");
}
else{
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
scanf("%d",&mat[i][j]);
}
}
printf("\nMatrix 1st Is:\n");
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
printf("%d ",mat[i][j]);
}
printf("\n");
}
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
if(j>i && mat[i][j]!=0){
flag=0;
break;
}
}
}
}
if(flag==1){
printf("\n A Lower Traingle");
}
else{
printf("\nNot A Lower Traingle");
}
return 0;
}
