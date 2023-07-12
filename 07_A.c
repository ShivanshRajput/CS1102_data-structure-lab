/* wap to create a tree and implemant
   1. inorder
   2. preorder
   3. postorder
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * left;
	struct node * right;
};


struct node * newnode(int data){
	struct node * node;
	node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
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
	if (node!=NULL){

		printf("%d ",node->data);
		printpreorder(node->left);
		printpreorder(node->right);
	}
}

void printpostorder(struct node * node){
	if (node!=NULL){
	
		printpostorder(node->left);
		printpostorder(node->right);
		printf("%d ",node->data);
	}
}

int main (){
	struct node * root;
	root = newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	
	printf("Inorder traversal : ");
	printinorder(root);
	printf("\n");
	
	printf("preorder traversal : ");
	printpreorder(root);
	printf("\n");
	
	printf("postorder traversal : ");
	printpostorder(root);
	printf("\n");
}


/*
EXPLANATION

1. we first create a struct node with field data, left pointer and right pointer.
2. we create a newnode() function which will create a new node and assign NULL to left and right child
3. we write recursive codes for inorder preorder and postorder traversal of trees. In inorder traversal 
   first left tree is checked then data is printed then right tree is checked. similarly according to 
   conditions of prefix and post fix order of these checking is decided respectively.
4. in main fuction we just create a temporary tree
          1
        /   \
       2     3
      / \   / \
     4   5 6   7

5. we then call inorder, preorder and postorder traversal to print the data of tree;

*/
