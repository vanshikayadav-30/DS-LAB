#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *last = NULL, *newnode, *temp;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &value);

        newnode->data = value;

        if(last == NULL)
        {
            last = newnode;
            newnode->next = last;
        }
        else
        {
            newnode->next = last->next;
            last->next = newnode;
            last = newnode;
        }
    }

    printf("Circular Linked List: ");

    temp = last->next;

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != last->next);

    printf("back to first node");

    return 0;
}
