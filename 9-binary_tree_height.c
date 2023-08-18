#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a particular node
 * @tree: find the height of
 * Return: l_depth if largest, or r_depth if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_depth;
	size_t r_depth;

	if (!tree)
		return (0);

	if (tree->left)
		l_depth = binary_tree_height(tree->left) + 1;
	else
		l_depth = 0;

	if (tree->right)
		r_depth = binary_tree_height(tree->right) + 1;
	else
		r_depth = 0;

	if (l_depth > r_depth)
		return (l_depth);
	else
		return (r_depth);
}
