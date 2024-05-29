#include<stdio.h>
#include<stdlib.h>
struct node{         //structure of list
    int data;
    struct node *next;
};
struct node *start=NULL,*next,*temp,*prev,*new1;
void create(){   //code of creating list
    int n;
    char choice;
    printf("\nenter a number");
    scanf("%d",&n);
    start=(struct node *)malloc(sizeof(struct node));
    start->data=n;
    start->next=NULL;
    temp=start;
    printf("\nwant to continue:");  //  click 'Y' or 'y' for inserting new element into list //
    scanf(" %c",&choice);
    while(choice=='y' || choice=='Y'){
        int num;
        printf("\nenter a number");
        scanf("%d",&num);
        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=num;
        new1->next=NULL;
        temp->next=new1;
        temp=temp->next;
        printf("\nwant to continue:");
        scanf(" %c",&choice);
    }
}
void display(){     //code of displaying list
    if(start==NULL){
        printf("\nList is not found");
    }
    else{
        temp=start;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
    printf("NULL");
}
void insertatfirst(){ //code of inserting list at first
    int num;
    if(start==NULL){
        printf("\nlist is not found");
    }
    else{
        printf("\nenter a number you want to insert at first");
        scanf("%d",&num);
        temp=start;
        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=num;
        new1->next=start;
        start=new1;
    }
}
void insertatlast(){   //code of inserting list at last
    int num;
    if(start==NULL){
        printf("\nlist is not found");
    }
    else{
        printf("\nenter a number you want to insert at last");
        scanf("%d",&num);
        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=num;
        new1->next=NULL;
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new1;
    }
}
void deleteatfirst(){    //code of deleting node from first of list
    if(start==NULL){
        printf("\nlist is not found");
        return;
    }
    else{
        temp=start;
        start=start->next;
        printf("\ndeleted element is %d",temp->data);
        free(temp);
    }
}
void deleteatlast(){       //code of deleting node from last of list
    if(start==NULL){
        printf("\nlist is not found");
        return;
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        printf("\ndeleted element is %d",temp->data);
        free(temp);
    }
}
void searchnode(){      //code of searching node 
    int flag=0,search,i=1;
    if(start==NULL){
        printf("\nlist not found");
    }
    else{
    printf("\nenter number you want to search");
    scanf("%d",&search);   
        temp=start;
        while(temp!=NULL){
            if(temp->data==search){
                flag=1;
                break;
            }
            temp=temp->next;
            i++;
        }
    }
        if(flag==1){
        printf("\nelement present at %d position",i);
        }
        else{
            printf("\nelement not present in list");
        }
    }
void countnode(){   //code of counting total node in list 
    int count=0;
    if(start==NULL){
        printf("\nlist is not found");
    }
    else{
        temp=start;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
    }
    printf("\nTotal nodes are %d",count);
} 
void insertatmiddle(){     //code of inserting node at middle position
    int num,midpos,i=0;
        printf("\nenter a number you want to insert at middle");
        scanf("%d",&num);
        printf("\nenter position(index) of insertion");
        scanf("%d",&midpos);
    if(start==NULL){
        printf("\nlist is not found");
        return;
    }
    else if(midpos==0){   //insert node at 0th index  
        insertatfirst();
    }
    else{
        new1=(struct node *)malloc(sizeof(struct node));
        new1->data=num;
        new1->next=NULL;
        temp=start;
        while(i<midpos){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=new1;
        new1->next=temp;
    }
}   
void deleteatmiddle(){         //code of deleting node from middle position
    int i=0,midpos;
            printf("\nenter your position(index) of deletion");
            scanf("%d",&midpos);
    if(start==NULL){
        printf("\nlist is not found");
        return;
    }
    else if(midpos==0){    //delete node of 0th index
        deleteatfirst();
    }
    else{
        temp=start;
        while(i<midpos){
            prev=temp;
            temp=temp->next;
            i++;
        }
            next=temp->next;
            prev->next=next;
            printf("\ndeleted element is %d",temp->data);
            free(temp);
    }
}
int main(){
    int choice;
        printf("\n1.create\n2.display\n3.insertion at first\n4.insertion at last\n5.deleteion at first\n6.deletion at last\n7.counting the total node\n8.searching the node in list\n9.inserttion at middle\n10.deletion from middle\n11.exit\n");
    do{
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insertatfirst();
            break;
            case 4:insertatlast();
            break;
            case 5:deleteatfirst();
            break;
            case 6:deleteatlast();
            break;
            case 7:countnode();
            break;
            case 8:searchnode();
            break;
            case 9:insertatmiddle();
            break;
            case 10:deleteatmiddle();
            break;
            case 11:exit(0);
            break;
            default:printf("\ninvalid option");
        }
    }while(choice!=11);
    return 0;
}
    
