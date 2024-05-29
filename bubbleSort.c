#include<stdio.h>
int main(){
    int i,j,range,a[50],temp;
    printf("\nenter range:");
    scanf("%d",&range);
    printf("\nenter %d elements:",range);
    for(i=0;i<range;i++){
    scanf("%d",&a[i]);
    }
    printf("\nbefore sorting");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    printf("\nsorting process is executing.........");
    for(i=0;i<range-1;i++){
        for(j=0;j<range-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nafter sorting");
    for(i=0;i<range-1;i++){
        printf("\n%d",a[i]);
    }
    
}