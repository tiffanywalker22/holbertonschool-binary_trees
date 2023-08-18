#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 * Return: the number of leaves, 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
