// WAP to create a link list of 10 nodes display the content of the nodes 
// traverse the link list and display the content of the nodes.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void printlist(struct node * a){
    while (a!=NULL)
    {
        printf("%d ",a->data);
        a=a->next;
    }
    
}

int main()
{
    struct node* head;
    struct node* n1;
    struct node* n2;
    struct node* n3;
    struct node* n4;
    struct node* n5;
    
    head=(struct node*)malloc(sizeof(struct node));
    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    n4=(struct node*)malloc(sizeof(struct node));
    n5=(struct node*)malloc(sizeof(struct node));

    head->data=50;
    head->next=n1;
    n1->data=100;
    n1->next=n2;
    n2->data=200;
    n2->next=n3;
    n3->data=300;
    n3->next=n4;
    n4->data=400;
    n4->next=n5;
    n5->data=500;
    n5->next=NULL;
    
    struct node * trav;
    trav=head;

    printf("before insertion\n");
    printlist(trav);

    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    n2->next=new_node;
    new_node->data=9595;
    new_node->next=n3;


    printf("\nafter insertoion\n");
    printlist(trav);
    
    return 0;

}