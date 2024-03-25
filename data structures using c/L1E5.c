#include<stdio.h>
#include<stdlib.h>
int* queue;
int size;
int front=-1;
int rear=-1;
void initializequeue(){
    queue=(int*)malloc(size* sizeof(int));
}
void enqueue(int data){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else if((rear+1)%size==front){
        printf("queue is full");
        return;
    }
    else{
    rear=(rear+1)%size;
    queue[rear]=data;
    }
    printf("%d enqueued to the queue",data);
}
int dequeue(){
    if(front==-1 && rear==-1){
        printf("queue is empty");
        return -1;
    }
    else if(front==rear){
        printf("%d is dequeued",queue[front]);
        front=rear=-1;
    }
    else{
    printf("%d is dequeued",queue[front]);
    front=(front+1)%size;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("queue is empty");
        return;
    }
    printf("queue elemnts are:");
    int i= front;
    while(i!=rear){
        printf("%d\n",queue[i]);
        i=(i+1)%size;
    }
    printf("%d",queue[i]);
}
int searchElement(int element) {
    if (front==-1  && rear==-1) {
        printf("Queue is empty. Cannot search\n");
        return -1;
    }

    int current = front;
    int position = 1;

    do {
        if (queue[current] == element) {
            return position;
        }
        current = (current + 1) % size;
        position++;
    } while (current != (rear + 1) % size);

    return -1;
}

int main(){
    int data,choice,element;
    printf("enter the size of queue:");
    scanf("%d",&size);
    initializequeue();
    while(1){
        printf("\n1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.search\n");
        printf("4.print\n");
        printf("5.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the data to enqueue:");
            scanf("%d",&data);
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                int searchResult = searchElement(element);
                if (searchResult != -1) {
                    printf("%d found at position %d\n", element, searchResult);
                } else {
                    printf("%d not found in the queue\n", element);
                }
                break;
            case 4:
            display();
            break;
            case 5:
            free(queue);
            exit(0);
            default:
            printf("invalid choice");
        }
    }
    return 0;
}