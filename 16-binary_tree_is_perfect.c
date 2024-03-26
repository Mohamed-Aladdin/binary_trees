#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: The pointer to the root node of the tree to check.
 *
 * Return: Int or 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
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
