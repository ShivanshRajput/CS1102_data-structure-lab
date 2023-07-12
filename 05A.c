/*
Queue implementation 
    by using array
    
1. enqueue
2. dequeue
3. displayqueue

*/
#include<stdio.h>

int main()
{
    int n;
    printf("enter size of queue\n");
    scanf("%d",&n);
    int Q[n];
    int front=-1 , rear=-1;
    
    int ch;
    printf("enter choice\n");
    printf("1. enqueue\n");
    printf("2. dequeue\n");
    printf("3. displayqueue\n");
    scanf("%d",&ch);
    while (ch){
        switch(ch){

            case 1 :
            if (rear==n-1){
                printf("overflow!!!\n");
            }
            else{
                int x;
                printf("enter value to enqueue\n");
                scanf("%d",&x);
                rear++;
                Q[rear]=x;
            }
            if(front==-1){
                front++;
            }
            break;

            case 2 :
            if (front==-1){
                printf("underflow!!!\n");
            }
            else{
                int y;
                y=Q[front];
                printf("dequeued element = %d\n",y);
                front++;
                if (front==rear+1){
                    front=-1;
                    rear=-1;
                }
            }
            break;

            case 3 :
            for(int i=front;i<=rear;i++){
                printf("%d ",Q[i]);
            }
            printf("\n");
            break;

            default :
            printf("INVALID CHOICE!!!\n");
        }
        printf("press 0 to exit or continue giving choices\n");
        scanf("%d",&ch);
    }
    
    return 0;
}

/*
EXPLAINATION

1. we first ask the user the size of queue and store it in an integer 'n'
2. we defined an array of length n and two integers front and rear whose initial values are -1;
3. we asked user for the choice of operation, enqueue, dequeue, or displayqueue. based on user choices using switch case break statement we make 3 cases.
4. in case 1 (enqueue) we check for overflow condition (i.e. if rear==n-1), if not, we increment the rear pointer and update value at this pointer with 
   user given value. if this is first time enqueue (i.e. front==-1) we increment the front pointer too;
5. in case 2 (dequeue) we check for underflow condition (i.e. if front==-1) if not, we print the value at this front pointer and increase the front pointer. 
   if front pointer surpasses rear pointer, this means tht queue is now empty to we reinitialize the value of front and rear pointer to -1 again.
6. in case 3 (displayqueue) we just traverse through the array from front pointer to rear pointer and print all elements of the queue


*/