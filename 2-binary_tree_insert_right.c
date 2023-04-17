#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another
 * node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or
 * if the parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		temp = parent->right;
		temp->parent = node;
		parent->right = node;
		node->right = temp;
	}

	return (node);
}
