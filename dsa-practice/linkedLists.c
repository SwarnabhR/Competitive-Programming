#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void create();
void display();
void insert_begin();
void insert_pos();
void insert_end();
void delete_begin();
void delete_pos();
void delete_end();
int main()
{
    int choice;
    printf("Enter your choice");
    scanf("%d", &choice);
    while (1)
    {
        printf("\n*****\n");
        printf("0. Create\n");
        printf("1. display\n");
        printf("2. Insert Node at beginning\n");
        printf("3. Insert Node in specific position\n");
        printf("4. Insert Node at end of LinkedList\n");
        printf("5. Delete Node at beginning\n");
        printf("6. Delete Node at end\n");
        printf("7. Delete Node at position\n");
        printf("8. ** To exit **");

        switch (choice)
        {
        case 0:
            create();
            break;
        case 1:
            display();
            break;
        case 2:
            insert_begin();
            break;
        case 3:
            insert_pos();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            delete_begin();
            break;
        case 6:
            delete_end();
            break;
        case 7:
            delete_pos();
            break;
        case 8:
            exit(0);
        default:
            printf("Wrong Choice!");
            break;
        }
    }
}
void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("Linked list is empty!");
        return;
    }
    printf("Linked List: ");
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void insert_pos()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        temp = head;
        return;
    }
    else
    {
        struct node *ptr = head;
        struct node *prev_ptr;
        int pos;
        printf("Enter the position you would like to add: \n");
        scanf("%d", &pos);
        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr;
        prev_ptr = temp;
    }
}
void insert_end()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        temp = head;
        return;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void delete_begin()
{
    if (head == NULL)
    {
        printf("Linked List is empty!");
        return;
    }
    else
    {
        struct node *ptr = head;
        head = head->next;
        free(ptr);
    }
}
void delete_end()
{
    if (head == NULL)
    {
        printf("Linked List is empty!");
        return;
    }
    else if (head->next = NULL)
    {
        struct node *ptr = head;
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node *ptr = head;
        struct node *prev_ptr = NULL;
        while (ptr->next != NULL)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = NULL;
        free(ptr);
    }
}
void delete_pos()
{
    int pos;
    printf("Enter position to be deleted: ");
    scanf("%d", &pos);
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("The Linked List is empty!");
        return;
    }
    else if (pos == 0)
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node *prev_ptr;
        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        free(ptr);
    }
}
