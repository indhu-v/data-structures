#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*left,*right;
}*root=NULL,*newnode;
struct node* create(struct node *root,int val)
{
	if(root==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=val;
		newnode->left=NULL;
		newnode->right=NULL;
		return(newnode);
	}
	else if(val<root->data)
	 root->left=create(root->left,val);
	else if(val>root->data)
	 root->right=create(root->right,val);
	return (root);
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
	    preorder(root->left);
	    preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
	    postorder(root->left);
	    postorder(root->right);
	    printf("%d\t",root->data);
	}
}
int main()
{
	int ch,val;
	do
	{
		printf("\nBINARY SEARCH TREE ");
		printf("\n1.CREATE\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT\n");
		printf("enter your choice;");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			 printf("enter the elements");
			 scanf("%d",&val);
             root=create(root,val);
             break;
			case 2: inorder(root);break;
			case 3: preorder(root);break;
			case 4: postorder(root);break;
			case 5:exit(0);break;
	}}
		while(ch>0&&ch<=5);
}
