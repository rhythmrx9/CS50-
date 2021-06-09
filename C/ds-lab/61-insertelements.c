#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int element;
  struct node *next;
};

void insert()
{
    struct node* temp;
    temp = (struct node*) malloc(sizeof(struct node));

    printf("enter the data");
    scanf("%d", &temp->element);

    temp->next=NULL;

    
}

int main()
{


  return 0;
}

