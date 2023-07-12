/*
Stack implementation 
    by using array
    by using link list 
1. push
2. pop
3. peek
4. display
*/

// using array
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of stack\n");
    scanf("%d",&n);
    int stack[n];
    int top=-1;
    printf("\nUSER CHOICE\n");
    printf("1. push element in stack\n");
    printf("2. pop element out of stack\n");
    printf("3. view top element\n");
    printf("4. display stack\n\n");
    
    int choice;
    printf("enter your choice\n");
    scanf("%d",&choice);
    while (choice){
        switch (choice)
        {
        case 1:  // pushing an element
            if(top==n-1){
                printf("overflow!!!\n");
                break;
            }
            else{
                int x;
                printf("enter element to push\n");
                scanf("%d",&x);
                top++;
                stack[top]=x;
                break;
            }
        
        case 2:  // popping an element
            if (top==-1){
                printf("underflow!!!\n");
                break;
            }
            else{
                int y;
                y=stack[top];
                printf("popped element is %d\n",y);
                top--;
                break;
            }

        case 3 :  // displaying top element
            if (top==-1){
                printf("stack underflow!!!");
                break;
            }
            else{
                printf ("Top element = %d\n",stack[top]);
                break;
            }

        case 4 :  // displaying whiole stack
            if (top==-1){
                printf("stack is empty\n");
                
            }
            else{
                for (int i=0;i<=top;i++){
                    printf("%d ",stack[i]);
                }
                
            }
            break;

        default:
            printf("invalid choice!!!\n");
            break;
        }

        printf("press 0 to end or continue giving choice\n");
        scanf("%d",&choice);
    }
    return 0;
}



/* 
EXPLAINATION

1. for creation of stack we first get the size of stack as 'n' from the user.
2. we created an array of size n, which will function as our stack.
3. we created a top pointer and pointed it to -1, to represent the stack being empty
4. we give user a choice to push, pop, peek or display the stack, 
5. while user is giving the choice based on user input, by using switch case break statement, we make 4 cases.
6. in case 1 for pushing an elemrnt we first check for overflow condition, else we increment the top pointer and inserted a new value in stack.
7. in case 2 for popping the element, we print out the value at top pointer and then decrease the top pointer.
8. in case 3 for displaying the top element, we first check for underflow condition, else wes simply display the value at top pointer.
9. in case 4 for displaying whole stack, we start from index 0 and move up to top pointer and print the values. 
10. in default case if user choice is beyond 1,2,3or 4, we desplay error, invalid choice.
11. we ask if the user wants to continue giving choice or terminate the program by pressing 0


*/