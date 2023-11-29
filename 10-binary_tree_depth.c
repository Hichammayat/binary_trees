#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a node in a binary tree.
 * @tree: A pointer to the node to count the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth - 1);
}
