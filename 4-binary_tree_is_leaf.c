#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: the node to check
 * Return: 1 if node is leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
