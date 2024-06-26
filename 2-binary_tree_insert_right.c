#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: The pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the new node o NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = calloc(1, sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
