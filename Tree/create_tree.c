#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

// Create a new node
node *create_node(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Insert a new node into the tree
node *insert_node(node *root, int data)
{
    if (root == NULL)
    {
        return create_node(data);
    }
    if (data < root->data)
    {
        root->left = insert_node(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert_node(root->right, data);
    }
    return root;
}

// Build a binary tree from user input
node *build_tree()
{
    node *root = NULL;
    int num;
    printf("Enter the root node: ");
    scanf("%d", &num);
    root = insert_node(root, num);
    while (1)
    {
        printf("Enter a node (enter -1 to stop): ");
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        insert_node(root, num);
    }
    return root;
}

// Print the tree in inorder traversal
void print_inorder(node *root)
{
    if (root != NULL)
    {
        print_inorder(root->left);
        printf("%d ", root->data);
        print_inorder(root->right);
    }
}

int main()
{
    node *root = NULL;
    printf("Enter the nodes of the binary tree:\n");
    root = build_tree();
    printf("Inorder traversal: ");
    print_inorder(root);
    return 0;
}
