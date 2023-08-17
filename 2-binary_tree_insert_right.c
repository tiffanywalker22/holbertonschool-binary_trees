#include "binary_trees.h"

/**
 * binary_tree_insert_right - node to the right of parent
 * @parent: root of the tree
 * @value: value
 * Return: pointer new node, or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);
	right_node->n = value;
	right_node->parent = parent;
	if (parent->right == NULL)
		right_node->right = NULL;
	else
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	right_node->left = NULL;
	return (right_node);
}
