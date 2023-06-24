#include <bits/stdc++.h>
using namespace std;

struct Node {
	int value;
	Node *left;
	Node *right;

	Node(int value)
	{
		this->value = value;
		left = NULL;
		right = NULL;
	}
};

// This program prints the tree starting from node in preorder notation
void preorder(Node* node)
{
	if (node == NULL){
        return ;
    }
        cout<< node->value << ' ';
        preorder(node->left);
        preorder(node->right);
}

// This program prints the tree starting from node in inorder notation
void inorder(Node* node)
{
	if (node == NULL){
        return ;
    }
         inorder(node->left);
         cout<< node->value << ' ';
         inorder(node->right);
}

// This program prints the tree starting from node in postorder notation
void postorder(Node* node)
{
       	if (node == NULL){
        return ;
    }
        postorder(node->left);
        postorder(node->right);
        cout<< node->value << ' ';
}


int main()
{
	Node *root = new Node(7);
	root->left = new Node(3);
	root->right = new Node(12);

	root->left->left = new Node(1);
	root->left->right = new Node(6);

	root->right->right = new Node(5);

  
    cout<< endl;
	// TODO: call the preorder, inorder and postorder functions here
	preorder(root);
    cout << endl;
    inorder(root);
     cout << endl;
    postorder(root);
     cout << endl;

	return 0;
}
