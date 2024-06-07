#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is aleaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL  && node->left == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of binary tree
 * otherwise 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	else
	{
		left_h = binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);

		if (left_h >= right_h)
			return (left_h + 1);
		else
			return (right_h + 1);
	}
}
