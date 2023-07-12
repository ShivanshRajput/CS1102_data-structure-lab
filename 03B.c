// wap to insert a node at the beginning of the link list and at the end of the link list and at the nth position of linked list 

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

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

    struct node *head , *fnode , *temp ,*trav , *newnode;
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
    
    printf("Printing original linked list\n");
    trav=head;
    printlist(trav);


    printf("\nUSER CHOICE FOR INSERTION OF ELEMENT\n");
    printf("1. insertion at beginning\n");
    printf("2. insertion at end\n");
    printf("3. insertion in between\n");
    int ch;
    printf("enter your choice\n");
    scanf("%d",&ch);

    while (ch){
        switch (ch){
            case 1 : // insertion at beggining
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter data in new node : ");
            scanf("%d",&newnode->data);
            newnode->next=head;
            head=newnode;
            break;

            case 2 : // insertion at end
            newnode=(struct node*)malloc(sizeof(struct node*));
            printf("Enter data in new node : ");
            scanf("%d",&newnode->data);
            trav=head;
            while (trav->next !=NULL){
                trav=trav->next;
            }
            trav->next=newnode;
            newnode->next = NULL;
            break;

            case 3 : // insertion at any position
            newnode=(struct node*)malloc(sizeof(struct node*));
            printf("Enter data in new node : ");
            scanf("%d",&newnode->data);
            int pos;
            printf("enter element after which you want to insert new node : ");
            scanf("%d",&pos);
            trav=head;
            pos--;
            while(pos--){
                trav=trav->next;
            } 
            newnode->next=trav->next;
            trav->next=newnode;
            break;

            default :
            printf("INVALID SELECTION!!!\n");
            break;

        }
        printf("updated linked list : ");
        trav=head;
        printlist(trav);
        printf("\nTo exit press 0 else enter your choice\n");
        scanf("%d",&ch);
    }
    

    return 0;
}