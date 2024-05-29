#include<stdio.h>
int main(){
    int range,i,j,a[50],index,min,temp;
    printf("\nenter a range:");
    scanf("%d",&range);
    printf("\nenter %d elements :",range);
    for(i=0;i<range;i++){
        scanf("%d",&a[i]);
    }
    printf("\nbefore sorting");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    printf("\nsorting executing is executed..........");
    for(i=0;i<range-1;i++){
        min=a[i];
        index=i;
        for(j=i+1;j<range;j++){
            if(min>a[j]){
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    printf("\nafter sorting");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
}