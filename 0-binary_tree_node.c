#include "binary_trees.h"

/**
 * binary_tree_node - function to create a new node
 * @parent: pointer of the adress of the parent node
 * @value: value of the node (integer)
 * 
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    new_node = malloc(sizeof(struct binary_tree_s));
    if(new_node == NULL)
    {
        fprintf(stderr, "Erreur d'allocation de memoire\n");
        return(NULL);
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}