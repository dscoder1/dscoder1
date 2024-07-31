#include<stdio.h>
int main(){
int mat[10][10],trans[10][10],row,column;
printf("\nEnter Rows And Columns Of Matrix:\n");
scanf("%d %d",&row,&column);
printf("\nEnter Elements Of Matrix:\n");
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
scanf("%d",&mat[i][j]);
}
}
printf("\nElements Of Matrix:\n");
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
printf("%d ",mat[i][j]);
}
printf("\n");
}
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
trans[j][i]=mat[i][j];
}
}
printf("\nTranspose Of Matrix:\n");
for(int i=0;i<column;i++){
for(int j=0;j<row;j++){
printf("%d ",trans[i][j]);
}
printf("\n");
}
return 0;
}
