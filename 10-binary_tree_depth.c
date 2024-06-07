#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: Depth of a node in a binary tree,
 * otherwise 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}

	return (counter);
}
