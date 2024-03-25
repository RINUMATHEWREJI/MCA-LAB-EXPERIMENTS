#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(struct node* top,int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=top;
    top=newnode;
    return newnode;

}
struct node* push(struct node* top,int data){
    struct node* newnode=createnode(top,data);
    newnode->next=top;
    top=newnode;
    return top;
}
struct node* pop(struct node* top){
    if(top==NULL){
        printf("stack is empty,cannot pop");
        return NULL;
    }
    struct node* temp=top;
    printf("%d popped",top->data);
    top=top->next;
    free(temp);
    return top;
}
struct node* search(struct node* top,int target){
    if(top==NULL){
        printf("stack is empty");
        return NULL;
    }
    struct node* current=top;
    int position=1;
    while(current!=NULL){
        if(target==current->data){
            printf("%d found at position %d from top",target,position);
        }
        current=current->next;
        position++;
    }
        printf("%d not found in stack",target);
 
    return top;
}
void print(struct node* top){
    struct node* current=top;
    printf("\nstack:");
    while(current!=NULL){
        printf("\n%d",current->data);
        current=current->next;
    }
}
void freestack(struct node*top){
    struct node* temp= top;
    while(temp!=NULL){
        struct node*current=temp;
        temp=temp->next;
        free(current);
    }
}
int main(){
    struct node* top=NULL;
    int data,target,choice,position;
    while(1){
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.search");
        printf("\n4.exit.");
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nenter the data to push:");
            scanf("%d",&data);
            top=push(top,data);
            print(top);
            break;
            case 2:
            top=pop(top);
            print(top);
            break;
            case 3:
            printf("enter the data to search:");
            scanf("%d",&target);
            search(top,target);
            print(top);
            break;
            case 4:
            freestack(top);
            exit(0);
            default:  
            printf("invalid choice");
        }

    }
    return 0;
}