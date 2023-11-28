#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
