#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
    };
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* node,int data){
    struct node* newnode=createnode(data);
    if(node==NULL){
        return newnode;
    }
    if(newnode->data < node->data){
        node->left=insert(node->left,newnode->data);
    }
    if(newnode->data > node->data){
        node->right=insert(node->right,newnode->data);
    }
    return node;
}
struct node* inorder(struct node* node){
    if(node!=NULL){
        inorder(node->left);
        printf("%d->",node->data);
        inorder(node->right);
    }
}
struct node* minvalue(struct node* node){
    struct node* current=node;
while(current && current->left!=NULL){
    current=current->left;
}
return current;
}
struct node* delete(struct node* node,int data){
    if(node==NULL){
        return NULL;
    }
    if(data<node->data){
        node->left=delete(node->left,data);
    }
    else if(data>node->data){
        node->right=delete(node->right,data);
    }
    else{
        if(node->left==NULL){
        struct node*temp=node->right;
        free(node);
        return temp;
    }
        else if(node->right==NULL){
        struct node* temp=node->left;
        free(node);
        return temp;
    }
     else{
    struct node*temp=minvalue(node->right);
    node->data=temp->data;
    node->right=delete(node->right,temp->data);
    }
    } 
    return node;

}
struct node* search(struct node* node,int data){
    if(node==NULL || node->data==data){
        return node;
    }
    if(data<node->data){
        return search(node->left,data);
    }
    else{
        return search(node->right,data);
    }
}
void display(struct node* node,int level){
    if(node==NULL){
        return;
    }
    level += 5;
    display(node->right,level);
    for(int i=5;i<level;i++){
        printf(" ");
    }
    printf("%d\n",node->data);
    display(node->left,level);
}
int main(){
    struct node* node=NULL;
    int data,choice,level;
    while(1){
        printf("\n1.insert\n");
        printf("2.delete\n");
        printf("3.inorder\n");
        printf("4.search\n");
        printf("5.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the data to insert:");
            scanf("%d",&data);
            node=insert(node,data);
            display(node,level);
            break;
            case 2:
            printf("Enter the data to delete: ");
            scanf("%d", &data);
            struct node* value=search(node,data);
            if(value!=NULL){
                printf("entered node %d found in tree",data);
                printf("\n");
                printf("\n");
            }
            else{
                printf("entered node %d not found in tree",data);
                printf("\n");
                printf("\n");
            } 
             node=delete(node, data);
            display(node, level);
            break;
            case 3:
            printf("inorder traversal:");
            node=inorder(node);
            break;
            case 4:
            printf("enter the data to search:");
            scanf("%d",&data);
            struct node* result=search(node,data);
            if(result!=NULL){
                printf("entered node %d found in tree");
            }
            else{
                printf("entered node %d not found in tree");
            }
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("invalid choice");
        }
    }
    return 0;
}