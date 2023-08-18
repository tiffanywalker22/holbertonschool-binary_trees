#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure size
 * Return: the size of the tree, or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_count;
	size_t r_count;

	if (tree == NULL)
		return (0);

	l_count = binary_tree_size(tree->left);

	l_count++;
	r_count = binary_tree_size(tree->right);
	r_count++;
	return (l_count + r_count - 1);
}
