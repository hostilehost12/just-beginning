#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int number;
    struct node *next;
}
node;
int main()
{
    node *list = NULL;
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // TODO: free any memory already malloc'd
            return 1;
        }
        printf("Number: ");
        scanf("%d", &n->number);

       n->next = NULL;
       if(list == NULL)
       // if list is empty
       {
        list = n;
       }
       // if list has numbers already
       else
       {
          for (node*ptr = list; ptr != NULL; ptr = ptr->next)
          {
            // if at end of list
            if (ptr->next == NULL)
            {
                ptr->next = n;
                break;
            }
          }
       }
    }

    for (node *ptr = list ; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n, ptr->number");

    }
    // time passes
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = ptr->next;
    }
    return 0;
}