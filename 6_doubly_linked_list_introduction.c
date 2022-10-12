#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left_link;
    struct node *right_link;
};

typedef struct node nd;
nd * createNode(int element)
{
    nd *t=(nd *)malloc(sizeof(nd));
    t->data=element;
    t->left_link=NULL;
    t->right_link=NULL;
    return t;
}

int main()
{
    nd *head;
    head = NULL;
    nd *creatNode;
    int ch,element;
    while (1)
    {
        printf("\nENTER \n 1 FOR INSERT: \n 2 FOR DISPLAY: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("ENTER THE VALUE: ");
            scanf("%d", &element);
            nd *temp=createNode(element);
            if(head==NULL)
            {
                temp->left_link=head;
                temp->right_link=NULL;
                head=temp;
            }
            else
            {
                temp->right_link=head;
                temp->left_link=NULL;
                head=temp;
            }
            // if (head == NULL)
            // {
            //     head = temp = creatNode;
            //     temp->left_link = NULL;
            //     temp->right_link = NULL;
            // }
            // else
            // {
            //     temp->left_link = creatNode;
            //     temp->right_link = NULL;
            //     temp = creatNode;
            // }
            break;

        case 2:
            temp = head;
            printf("\n");
            printf("Start->");
            // nd *temp1;
            while (temp != NULL)
            {      
                printf("<-%d->",temp->data);
                temp = temp->right_link;
                // temp1=(temp==NULL)?printf("Start"):temp;
                // temp1=temp;
            }
            printf("Null");
            printf("\n");
            break;

        default:
            printf("Invalid intput!");
            break;
        }
    }

    return 0;
}
