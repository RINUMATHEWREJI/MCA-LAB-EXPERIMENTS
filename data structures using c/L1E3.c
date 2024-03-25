#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
struct node* insertatbeginning(struct node* head, int data){
    struct node* newnode=createnode(data);
    if(head==NULL){
        return newnode;
    }
    newnode->next=head;
    head->prev=newnode;
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
    newnode->prev=current;
    return head;
}
struct node* insertatposition(struct node* head,int position,int data){
    struct node* newnode=createnode(data);
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
    if(current==NULL){
        printf("position out of bounds, cannot insert");
        free(newnode);
        return head;
    }
    newnode->next=current->next;
    newnode->prev=current;
    if(newnode->next!=NULL){
    current->next->prev=newnode->next;
    }
    current->next=newnode;
    
    return head;
}
struct node* deleteatbeginning(struct node* head){
    if(head==NULL){
        printf("list is empty.cannot delete");
        return NULL;
    }
    struct node*temp=head;
    head=head->next;
    free(temp);
    return head;

}
struct node* deleteatend(struct node* head){
    if(head==NULL){
        printf("list is empty.cannot delete");
        return NULL;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    struct node* current=head;
    while(current->next->next!=NULL){
        current=current->next;
    }
    struct node*temp=current->next;
    free(temp);
    current->next=NULL;
    return head;
}
struct node* deleteatposition(struct node* head,int position){
    if(position < 1 || head==NULL){
        printf("list is empty.cannot delete");
        return head;
    }
    if(position==1 && head!=NULL){
        return deleteatbeginning(head);
    }
    struct node* current=head;
    for(int i=1;i<position-1 && current!=NULL;i++){
        current=current->next;
    }
    if (current == NULL || current->next == NULL) {
        printf("Invalid position. Cannot delete.\n");
        return head;
    }
    struct node* temp=current->next;
    current->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=current;
    }
    
    free(temp);
    return head;

}
void printlist(struct node* head){
    struct node* current=head;
    while(current!=NULL){
        printf("%d<->",current->data);
        current=current->next;
    }
    printf("null");
}
void freelist(struct node* head){
    struct node* current=head;
    while(current!=NULL){
        struct node* temp =current;
        current=current->next;
        free(temp);
    }
}
int main()
{
    int data,choice,position;
    struct node* head=NULL;
    struct node* prev=NULL;
    while(1){
        printf("\n1.insert at beginning\n");
        printf("2.insert at end\n");
        printf("3.insert at position\n");
        printf("4.delete at beginning\n");
        printf("5.delete at end\n");
        printf("6.delete at position\n");
        printf("7.exit\n");
        printf("enter your choice:");
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