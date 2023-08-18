#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a particular node
 * @tree: the root of tree to find the height of
 * Return: height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_depth;
	size_t r_depth;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
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


/**
 * binary_tree_balance - finds the balance of a binary tree
 * @tree: the tree to find balance factor of
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
