#include "binary_trees.h"

 size_t count(const binary_tree_t *tree, size_t result);
/**
 * binary_tree_size - getting tree size
 *
 * @tree: node we want to count
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);
	result = count(tree, result);
	return (result - 1);
}

size_t count(const binary_tree_t *tree, size_t result)
{
	if (tree == NULL)
		return (0);
	result = count(tree->left, result);
	result = count(tree->right, result);
	result++;
	return(result);
}
