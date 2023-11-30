#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree .
 *
 * Return: return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
