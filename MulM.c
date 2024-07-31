#include<stdio.h>
int main(){
int mat1[10][10],mat2[10][10],mul[10][10],row1,column1,row2,column2;
printf("\nEnter Rows And Columns Of Matrix:\n");
scanf("%d %d",&row1,&column1);
printf("\nEnter Elements Of Matrix:\n");
for(int i=0;i<row1;i++){
for(int j=0;j<column1;j++){
scanf("%d",&mat1[i][j]);
}
}
printf("\nElements Of Matrix:\n");
for(int i=0;i<row1;i++){
for(int j=0;j<column1;j++){
printf("%d ",mat1[i][j]);
}
printf("\n");
}
printf("\nEnter Rows And Columns Of 2nd Matrix:\n");
scanf("%d %d",&row2,&column2);
printf("\nEnter Elements Of Matrix:\n");
for(int i=0;i<row2;i++){
for(int j=0;j<column2;j++){
scanf("%d",&mat2[i][j]);
}
}
printf("\nElements Of Matrix:\n");
for(int i=0;i<row2;i++){
for(int j=0;j<column2;j++){
printf("%d ",mat2[i][j]);
}
printf("\n");
}
if(column1!=row2){
printf("\nMultiplication Is Not Possible");
}
else{
for(int i=0;i<row1;i++){
for(int j=0;j<column2;j++){
mul[i][j]=0;
for(int k=0;k<column1;k++){
mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
}
}
}
for(int i=0;i<row1;i++){
for(int j=0;j<column2;j++){
printf("%d ",mul[i][j]);
}
printf("\n");
}
}
return 0;
}























