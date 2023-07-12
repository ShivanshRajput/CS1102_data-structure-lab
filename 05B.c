/*
Queue implementation 
    by using linked list
    
1. enqueue
2. dequeue
3. displayqueue

*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*front=NULL;
struct node*rear=NULL;

void enqueue(int x){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if (front==NULL && rear==NULL){
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue(){
    if (front==NULL ){
        printf("underflow!!!\n");
        rear=NULL;
    }
    else{
        struct node * temp;
        printf("dequeued %d\n",front->data);
        temp=front->next;
        free(front);
        front=temp;
    }
}

void displayqueue(){
    struct node*temp;
    if (front==NULL ){
        printf("Empty...");
        rear=NULL;
    }
    else{
        temp=front;
        while (temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    displayqueue();
    dequeue();
    displayqueue();
    dequeue();
    displayqueue();
    dequeue();
    displayqueue();
    dequeue();
    dequeue();
    return 0;
}

/*
EXPLAINNATION

1. we first create a node of linked list that contains two elements data and next pointer 
2. we globally declared front and rear pointer whose value initially is 'null'
3. we then write enqueue function, here we create a new node and assign a data value to it. 
   if this is first node (i.e. front==rear==null) we point front and rear pointer to this node else, 
   we insert this node at the end of existing linked list;
4. then we write dequeue function here, first we check for underflow condition (i.e. if front==null)
   if so we make rear null aswell, to reset the queue; if not,we print the data at front pointer and 
   delete first node from linked list(i.e. traverse front pointer to front->next).
5. last we write displayqueue function, here we check if front==null to check for empty queue, if so 
   we make rear=null to to reset the queue; if not we traverse from front pointer to the last (NUll) 
   and print data at each node.
6. in main function we use bunch of enqueue(), dequeue() and displayqueue() functions as driver code 
   and observe the output.
*/