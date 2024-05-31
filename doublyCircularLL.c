#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *start=NULL,*tail=NULL,*prev,*temp,*new1,*next;
    void create(){
        int n;
        char ch;
        printf("\nenter first element");
        scanf("%d",&n);
        start=(struct node *)malloc(sizeof(struct node));
        start->data=n;
        start->left=start->right=start;
        temp=start;
        tail=start;
        printf("\nwant to continue:");
        scanf(" %c",&ch);
        while(ch=='y' || ch=='Y'){
            int num;
            printf("\nenter next number:");
            scanf("%d",&num);
            new1=(struct node *)malloc(sizeof(struct node));
            new1->data=num;
            new1->left=temp;
            new1->right=start;
            temp->right=new1;
            start->left=new1;
            temp=temp->right;
            tail=temp;
            printf("\nwant to continue:");
            scanf(" %c",&ch);
    }
    }
    void display(){
        if(start==NULL){
            printf("\nList Is Nt Found");
            return;
        }
        else{
            temp=start;
            printf("\nList Is :\n");
            while(temp->right!=start){
                printf("%d->",temp->data);
                temp=temp->right;
            }
            printf("%d->",temp->data);
        }
    }
    void reverseDisplay(){
        if(start==NULL){
            printf("\nList Is Nt Found");
            return;
        }
        else{
            printf("\nIn Reverse :\n");
            while(temp->left!=tail){
                printf("%d->",temp->data);
                temp=temp->left;
            }
            printf("%d->",temp->data);
        }
    }
    void insertAtFirst(){
            int num;
            if(start==NULL){
                printf("\nList Is Not Found");
                return;
            }
            else{
                  printf("\nenter a number you want to Insert At First:");
                  scanf("%d",&num);
                  new1=(struct node *)malloc(sizeof(struct node));
                  new1->data=num;
                  new1->left=tail;
                  tail->right=new1;
                  new1->right=start;
                  start->left=new1;
                  start=new1;  
            }
    }
    void insertAtLast(){
        if(start==NULL){
            printf("\nList Not Found");
            return;
        }
        else{
            int num;
            printf("\nenter a number you want to insert at last:");
            scanf("%d",&num);
            new1=(struct node*)malloc(sizeof(struct node));
            new1->data=num;
            new1->right=start;
            new1->left=tail;
            start->left=new1;
            tail->right=new1;
            tail=new1;
        }
    }
    void insertAtMiddle(){
        int num,i=1,midpos;
            printf("\nenter a position where you want to insert :");
            scanf("%d",&midpos);
        if(start==NULL){
            printf("\nList Is Not Found");
            return;
        }
        else if(midpos==1){
            insertAtFirst();
            return;
        }
        else{
            printf("\nenter a number you want to insert at middle");
            scanf("%d",&num);
            temp=start;
            new1=(struct node *)malloc(sizeof(struct node));
            new1->data=num;
            new1->right=new1->left=NULL;
            while(i<midpos){
                prev=temp;
                temp=temp->right;
                i++;
            }
            prev->right=new1;
            new1->left=prev;
            new1->right=temp;
            temp->left=new1;
    }
    }
    void deleteFirst(){
        if(start==NULL){
            printf("\nList Is Not Found");
            return;
        }
        else{
            temp=start;
            printf("\ndeleted element is %d",temp->data);
            start=start->right;
            start->left=tail;
            tail->right=start;
            temp->right=temp->left=NULL;
            free(temp);
        }
    }
    void deleteAtLast(){
        if(start==NULL){
            printf("\nList Is Not Found");
            return;
        }
        else{
            temp=tail;
            printf("\ndeleted element is %d",temp->data);
            tail=tail->left;
            start->left=tail;
            tail->right=start;
            temp->right=temp->left=NULL;
            free(temp);
        }
    }
    void deleteAtMiddle(){
        int i=1,midpos;
        if(start==NULL){
            printf("\nList Is Not Found");
            return ;
        }
        /*else if(midpos==1){
            deleteFirst();
            return ;
        }*/
        else{
            temp=start;
            printf("\nenter position(middle) of element you want to delete:");
            scanf("%d",&midpos);
            while(i<midpos){
                prev=temp;
                temp=temp->right;
                i++;
            }
            prev->right=temp->right;
            temp->right=prev;
            printf("\ndeleted element is %d",temp->data);
            temp->right=temp->left=NULL;
            free(temp);
        }
    }
    void searchNode(){
        int search,i=1,flag=0;
        if(start==NULL){
            printf("\nList Not Found");
            return;
        }
        else{
            printf("\nenter a number you want to search");
            scanf("%d",&search);
            if(start->data==search){
            printf("\nelement is present at 1st position");
            flag=1;
            return;
            }
            else{
            temp=start;
            while(temp->right!=start){
                if(temp->data==search){
                    printf("\nelement present at %d position",i);
                    flag=1;
                    break;
                }
                    temp=temp->right;
                    i++;
                }
            }
        }
        if(flag==0){
            printf("\nElement Is Nt Found");
        }
 }
 void countNode(){
    int count=0;
    if(start==NULL){
        printf("\nList Is Not Found");
        return;
    }
    else{
        count=1;
        temp=start;
        while(temp->right!=start){
            count++;
            temp=temp->right;
        }
        printf("\nTotal Node Is %d",count);
    }
    
 }
        void findStart(){
            if(start==NULL){
                printf("\nList Is Not Found");
                return;
            }
            else{
                printf("\nStart Node Is %d",start->data);
            }
        } 
        void findTail(){
            if(start==NULL){
                printf("\nList Is Not Found");
                return;
            }
            else{
                printf("\nTail Node Is %d",tail->data);
            }
        }
int main(){
    int choice;
    printf("\nDoubly Circular Linked List Implementation!!!!!!!\n\n");
    printf("\nBelow Are Some Implementation Key:\n");
    printf("\n1.Creating List  2.display\n3.Reverse Display     4.Insertion at First\n5.Insertion At Last   6.Insertion At Middle\n7.Deletion At First   8.Deletion At Last\n9.Deletion At Middle  10.Searching The Node\n11.Counting The Node  12.Finding Start Node\n13.Finding Tail Node  14.exit\n");
    do{
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:reverseDisplay();
            break;
            case 4:insertAtFirst();
            break;
            case 5:insertAtLast();
            break;
            case 6:insertAtMiddle();
            break;
            case 7:deleteFirst();
            break;
            case 8:deleteAtLast();
            break;
            case 9:deleteAtMiddle();
            break;
            case 10:searchNode();
            break;
            case 11:countNode();
            break;
            case 12:findStart();
            break;
            case 13:findTail();
            break;
            case 14:printf("\nProgram Exited\n");
            exit(0);
            break;
            default:printf("\ninvalid option");
        }
    }while(choice!=14);
    return 0;
}