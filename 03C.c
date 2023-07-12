// wap to delete a node from the link list at the first position and the last position and nth position 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printlist(struct node*a){
    while(a!=NULL){
        printf("%d ",a->data);
        a=a->next;
    }
}

int main()
{   
    int n;
    printf("enter number of nodes in link list\n");
    scanf("%d",&n);

    struct node *head, *fnode, *temp , *trav;
    head =(struct node *)malloc(sizeof(struct node));
    printf("\nenter data in node 1\n");
    scanf("%d",&head->data);
    head->next=NULL;
    temp=head;
    for (int i=2;i<=n;i++){
        fnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data in node %d\n",i);
        scanf("%d",&fnode->data);
        fnode->next=NULL;
        temp->next=fnode;
        temp=fnode;
    }

    printf("the link list before deletion is \n");
    trav=head;
    printlist(trav);

    printf("\n");
    printf("\nUSER CHOICE\n");
    printf("1. delete first node\n");
    printf("2. delete last node\n");
    printf("3. delete node in between\n\n");
    int ch;
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch (ch){

        case 1: 
        head=head->next;
        break;

        case 2:
        trav=head;
        while (trav->next->next!=NULL){
            trav=trav->next;
        }
        trav->next=NULL;
        break;

        case 3:
        printf("enter the node to delete\n");
        int pos;
        scanf("%d",&pos);
        trav=head;
        while ((pos--)-2){
            trav=trav->next;
        }
        trav->next=trav->next->next;
        
        break;

        default :
        printf("INVALID SELECTION!!!\n");
        break;

    }
    printf("linked list after deletion is \n");
    trav=head;
    printlist(trav);

    return 0;
}