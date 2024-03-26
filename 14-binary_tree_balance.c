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

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: The pointer to the root node of the tree to traverse.
 *
 * Return: size_t or 0 if NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	return ((hl > hr ? hl : hr) + 1);
}
