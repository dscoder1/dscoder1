#include<stdio.h>
int main(){
int mat[10][10],mat1[10][10],flag=1,row,column,row1,column1;
printf("\nEnter Row For 1st Matrix:");
scanf("%d",&row);
printf("\nEnter Column For 1st Matrix:");
scanf("%d",&column);
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
printf("\nEnter Row For 2nd Matrix:");
scanf("%d",&row1);
printf("\nEnter Column For 2nd Matrix:");
scanf("%d",&column1);
for(int i=0;i<row1;i++){
for(int j=0;j<column1;j++){
scanf("%d",&mat1[i][j]);
}
}
printf("\nMatrix 2nd Is:\n");
for(int i=0;i<row1;i++){
for(int j=0;j<column1;j++){
printf("%d ",mat1[i][j]);
}
printf("\n");
}
printf("\nChecking For Identical");
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
if(mat[i][j]!=mat1[i][j]){
flag=0;
break;
}
}
}
if(flag==1){
printf("\nMatrix Is Identical");
}
else{
printf("\nMatrix Is Not Identical");
}
return 0;
}
