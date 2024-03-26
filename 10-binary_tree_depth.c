#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: The pointer to the root node of the tree to traverse.
 *
 * Return: size_t or 0 if NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!(tree && tree->parent))
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
