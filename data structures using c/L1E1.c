#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct node* insertatbeginning(struct node* head,int data){
    struct node* newnode=createnode(data);
    if(head==NULL){
        return newnode;
    }
    newnode->next=head;
    head=newnode;
    return head;
}
struct node* insertatend(struct node* head,int data){
    struct node* newnode=createnode(data);
    if(head==NULL){
        return newnode;
    }
    struct node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
    return head;
}
struct node* insertatposition(struct node* head,int position,int data){
    if(position<1 || head==NULL){
        printf("invalid position");
        return head;
    }
    if(position==1 && head!=NULL){
        return insertatbeginning(head,data);
    }
    struct node* current=head;
    for(int i=1;i<position-1 && current!=NULL;i++){
        current=current->next;
    }
    struct node* newnode=createnode(data);
    newnode->next=current->next;
    current->next=newnode;
    return head;
}
struct node* deleteatbeginning(struct node* head){
    if(head==NULL){
        printf("list is empty");
        return NULL;
    }
    struct node* temp= head;
    head=head->next;
    free(temp);
    return head;
}
struct node* deleteatend(struct node* head){
    if(head==NULL){
        printf("list is empty");
        return NULL;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    struct node* temp= head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}
struct node* deleteatposition(struct node* head,int position){
    if(position<1 && head==NULL){
        printf("invalid position");
        return NULL;
    }
    if(position==1 && head!=NULL){
        return deleteatbeginning(head);
    }
    struct node* current=head;
    struct node* temp=NULL;
    for(int i=1;i<position-1 && current!=NULL;i++){
        current=current->next;
    }
    if(current==NULL || current->next==NULL){
        printf("invalid position");
        return head;
    }
    temp=current->next;
    current->next=current->next->next;
    free(temp);
    return head;
}
void printlist(struct node* head){
    struct node* current=head;
    while(current!=NULL){
        printf("%d->",current->data);
        current=current->next;
    }
    printf("null");
}
void freelist(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        struct node* current=temp;
        temp=temp->next;
        free(current);

    }
}
int main(){
    int data,position,choice;
    struct node* head=NULL;
    while(1){
        printf("1.insert at beginning.\n");
        printf("2.insert at end.\n");
        printf("3.insert at position.\n");
        printf("4.delete at beginning.\n");
        printf("5.delete at end.\n");
        printf("6.delete at position.\n");
        printf("7.exit.\n");
        printf("enter yout choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the element to insert:");
            scanf("%d",&data);
            head=insertatbeginning(head,data);
            printlist(head);
            break;
            case 2:
            printf("enter the element to insert:");
            scanf("%d",&data);
            head=insertatend(head,data);
            printlist(head);
            break;
            case 3:
            printf("enter the element to insert:");
            scanf("%d",&data);
            printf("enter the position to insert:");
            scanf("%d",&position);
            head=insertatposition(head,position,data);
            printlist(head);
            break;
            case 4:
            head=deleteatbeginning(head);
            printlist(head);
            break;
            case 5:
            head=deleteatend(head);
            printlist(head);
            break;
            case 6:
            printf("enter the position to delete:");
            scanf("%d",&position);
            head=deleteatposition(head,position);
            printlist(head);
            break;
            case 7:
            freelist(head);
            exit(0);
            default:
            printf("invalid choice");
        }
    }
    return 0;

}