#include "binary_trees.h"

size_t count(const binary_tree_t *tree, size_t result);
/**
 * binary_tree_height - getting tree size
 *
 * @tree: node we want to count
 *
 * Return: the size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
