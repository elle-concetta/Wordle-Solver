/* COP 4338: Programming Assignment 5
   Name: Elizabeth Fassler */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tnode {
	char *value;
	struct tnode *left;
	struct tnode *right;
};

typedef struct tnode tnode; // Tnode is my binary tree node typedef

tnode *talloc() {
	return (tnode *)malloc(sizeof(tnode));
}

void inorder_print(tnode *root) {
	if (root == NULL)
		return;
	inorder_print(root->left);	// Visiting the left substree
	printf("%s", root->value);	// Visiting the root
	inorder_print(root->right); // Visiting the left substree
}

int bst_insert(tnode **root_p, char *val) {
	if ((*root_p) == NULL) { // Tree is empty
		(*root_p) = talloc();
		(*root_p)->value = strdup(val);
		(*root_p)->left = (*root_p)->right = NULL;
		return 1; // Successful insert

	}
	if (!strcmp((*root_p)->value, val)) // Duplicate
		return 0; // Unsuccessful
	if (strcmp((*root_p)->value, val) > 0)
		return bst_insert(&((*root_p)->left), val);
	return bst_insert(&((*root_p)->right), val);
}
