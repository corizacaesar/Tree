#include<bits/stdc++.h> 
  
using namespace std; 
  
struct Node 
{ 
    int key; 
    struct Node *left, *right;
	 
}; 
  
// A utility function to create a new BST Node 
struct Node *newNode(int item) 
{ 
    struct Node *temp = new Node; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
}
  
/* A utility function to insert a new 
   Node with given key in BST */
Node* insert(Node* node, int key) 
{ 
    /* If the tree is empty, return a new Node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key); 
  
    /* return the (unchanged) Node pointer */
    return node; 
} 

void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->key << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
  
// Driver Program to test above functions 
int main() 
{ struct Node *root = NULL;
    int x,y,n;
    cin>>y;
    
    for(int j=0; j<y; j++){
    	cin>>x;
    	root = insert(root, x);
    } 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInorder(root); 
  
    return 0; 
}
