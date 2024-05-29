#include<stdio.h>
int main(){
    int i,j,temp,a[50],range;
    printf("\nenter range");
    scanf("%d",&range);
    printf("\nenter %d elements:",range);
    for(i=0;i<range;i++){
        scanf("%d",&a[i]);
    }
    printf("\nelements are:");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    printf("\nsorting is executed.......");
    for(i=1;i<range;i++){
        temp=a[i];
        j=i-1;
    while(a[j]>temp && j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    printf("\nafter sorting");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    return 0;
}