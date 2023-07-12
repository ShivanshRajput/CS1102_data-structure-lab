/*
Stack implementation 
    by using array
    by using link list 
1. push
2. pop
3. peek
4. display
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=NULL;

void push(int x){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("pushed %d\n",x);
}

void pop(){
    if (top==NULL){
        printf("underflow\n");
    }
    else{
        struct node*temp;
        printf("popped %d\n",top->data);
        temp=top->next;
        free(top);
        top=temp;
    }
}   

void peek(){
   printf("top element = %d\n",top->data);
}

void displayqueue(){
    struct node*trav=top;
    
    while (trav!=NULL){
        printf("%d ",trav->data);
        trav=trav->next;
    }
    printf("\n");
}

int main()
{
    push(34);
    push(45);
    push(14);
    push(19);
    peek();
    displayqueue();
    pop();
    displayqueue();
    
    return 0;
}


/*
EXPLAINATION

1. we first defined a node of a linked list using struct that contains two elements data and next pointer
2. we globally declared a 'top' pointer whose value is 'null' initially
3. we defined push function, in push function we just create a new node, adding data andappend it in front of linked list 
   (insertion at beginning of linked list), and also update the top pointer to this new node;
4. we defined pop function, in pop function, we first checked if top pointer is null (underflow condition) if not, 
   we update top pointer to top->next (basically deleting a node from beginning of linked list).
5. next we defined peek function, which only prints data value at top pointer 
6. at last we created a displayqueue function, here we just traverse through linked list and print its data 
7. now inside main function, we just run some driver code using some push() pop() command and to see the change, 
   use displayqueue() function and observe the output.

*/