#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Parent of the node to create
 * @value: value of new node
 *
 * Return: pointer to thnew node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
