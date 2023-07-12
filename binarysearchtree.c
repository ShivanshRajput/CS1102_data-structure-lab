#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node *newnode(int x){
    struct node* node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=x;
    node->left=NULL;
    node->right=NULL;
    return node;
}

struct node * insert(struct node * node,int x){
    
    if (node==NULL){
        return newnode(x);
    }
    if(x<node->data){
        node->left=insert(node->left,x); 
    }
    else{
        node->right=insert(node->right,x);
    }
    return node;
}

void printinorder(struct node * node){
	if (node!=NULL){
		printinorder(node->left);
		printf("%d ",node->data);
		printinorder(node->right);
	}
}

void printpreorder(struct node * node){
	
	if (node != NULL){
		printf("%d ",node->data);
		printpreorder(node->left);
		printpreorder(node->right);
	}
}

void printpostorder(struct node * node){
	
	if (node != NULL){
		printpostorder(node->left);
		printpostorder(node->right);
		printf("%d ",node->data);
	}
}

int main(){

    int n;
	printf("enter number of nodes to make tree\n");
	scanf("%d",&n);
	int r;
	printf("start entering the nodes\n");
	scanf("%d",&r);
	struct node * root = NULL;
	root=insert(root,r);
	n--;
	while (n--){
		int t;
		scanf("%d",&t);
		insert(root,t);
	}
	printf("\nInOrder : ");
	printinorder(root);
	printf("\nPreOrder : ");
	printpreorder(root);
	printf("\nPostOrder : ");
	printpostorder(root);
	return 0;



    // struct node * root=NULL;
    
    // root=insert(root,11);
    // insert(root,20);
    // insert(root,30);
    // insert(root,12);
    // insert(root,8);
    // printinorder(root);
}