#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp = NULL;

	node = malloc(sizeof(binary_tree_t));
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;
	if (node == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		temp = parent->left;
		parent->left = node;
		node->left = temp;
	}

	return (node);
}
