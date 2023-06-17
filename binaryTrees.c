#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};
struct node *root = NULL;
void insert(int data)
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node));
    struct node *current;
    struct node *parent;
    tempNode->data = data;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;

    // if the tree is empty
    if (root == NULL)
    {
        root = tempNode;
    }
    else
    {
        current = root;
        parent = NULL;
        while (1)
        {
            parent = current;
            if (data < parent->data)
            {
                current = current->leftChild;
                if (current == NULL)
                {
                    parent->leftChild = tempNode;
                    return;
                }
            }
            else
            {
                current = current->rightChild;
                if (current == NULL)
                {
                    parent->rightChild = tempNode;
                    return;
                }
            }
        }
    }
}
void inorder_traversal(struct node *root)
{
    if (root != NULL)
    {
        inorder_traversal(root->leftChild);
        printf("%d", root->data);
        inorder_traversal(root->rightChild);
    }
}
int main()
{
    int i;
    int array[7] = {27, 14, 35, 10, 19, 31, 42};
    for (i = 0; i < 7; i++)
    {
        insert(array[i]);
    }
    printf("\n Inorder traversal:");
    inorder_traversal(root);
    return 0;
}