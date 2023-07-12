// WAP to create a link list of 10 nodes display the content of the nodes 
// traverse the link list and display the content of the nodes.

#include <stdio.h>
#include <stdlib.h>
// creating node template
struct node
{
    int data;
    struct node *next;
};

//function for traversing through ll and print its content
void printlist(struct node *node){
    while (node != NULL){
        printf("%d ",node->data);
        node=node->next;
    }
}


int main()
{   
    int n;
    printf("enter the number of nodes in linked list\n");
    scanf("%d",&n);

    //creating head node
    struct node *head , *fnode , *temp ,*trav;
    //memory assignment
    head=(struct node*)malloc(sizeof(struct node));
    
    int data;
    printf("enter data for node 1 : ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    
    temp=head;
    for (int i=2;i<=n;i++){
        fnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d : ",i);
        scanf("%d",&data);
        fnode->data=data;
        fnode->next=NULL;
        temp->next=fnode;
        temp=temp->next;
        
    }
    
    trav=head;
    printlist(trav);

    return 0;
}