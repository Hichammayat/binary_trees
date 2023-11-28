#include "binary_trees.h"

/**
 * binary_tree_node - function that Creates a binary tree node.
 * @parent: pointer to the parent of the node .
 * @value: the new node value.
 *
 * Return: a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
