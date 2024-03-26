#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: The pointer to the root node of the tree measure the balance factor.
 *
 * Return: Int or 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);

	hl = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	hr = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (hl - hr);
}
