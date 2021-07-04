// Lab 9 Program 3 : C Program to calculate node heights and balancing factors in Binary Search Tree.

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};


int MaxHeight(struct node *node)
{
	if (node == NULL)
		return 0;
	else 
    {
		// compute the height of each subtree 
		int lDepth = MaxHeight(node->left);
		int rDepth = MaxHeight(node->right);

        if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
}


struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

int main()
{
    struct node *root = NULL;

    int i,a,b,n;

    printf("Enter Number of elements to be inserted: ");
    scanf("%d",&n);

    printf("Enter the elements: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        root = newNode(a);
    }


	printf("Height of tree is %d\n", MaxHeight(root));

	return 0;
}
