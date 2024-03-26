#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root.
 * @node: The pointer to the node to check.
 *
 * Return: 0 or 1.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
