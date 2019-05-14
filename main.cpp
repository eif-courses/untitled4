#include <cstdlib>
#include <iostream>
using namespace std;
class Tree{
public:
  int data;
  Tree *left;
  Tree *right;

  Tree * node(int data){
    Tree * node = new Tree();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
  }
  void printPostOrder(Tree * node){
    if(node == NULL) {return;}
    // first recur on left subtree
    printPostOrder(node->left);
    // then recur on right subtree
    printPostOrder(node->right);
    // now deal with the node
    cout << (char)node->data << " ";
  }
  /* Given a binary tree, print its nodes in inorder*/
  void printInOrder(Tree * node)
  {
    if (node == nullptr) {return;}
    /* first recur on left child */
    printInOrder(node->left);
    /* then print the data of node */
    cout << (char)node->data << " ";
    /* now recur on right child */
    printInOrder(node->right);
  }
  /* Given a binary tree, print its nodes in preorder*/
  void printPreorder(Tree *node)
  {
    if (node == nullptr)
      return;

    /* first print data of node */
    cout << (char)node->data << " ";

    /* then recur on left sutree */
    printPreorder(node->left);

    /* now recur on right subtree */
    printPreorder(node->right);
  }


};

int main(int argc, char** argv) {


  int a;
  Tree *tree = NULL;

  tree = tree->node('F');

  tree->left = tree->node('B');
  tree->right = tree->node('G');
  tree->left->left = tree->node('A');
  tree->left->right = tree->node('D');
  tree->left->right->left = tree->node('C');
  tree->left->right->right = tree->node('E');

  tree->right->right = tree->node('I');
  tree->right->right->left = tree->node('H');

  cout<< "POSTORDER\n";
  tree->printPostOrder(tree);
  cout<< "\nINORDER"<< endl;
  tree->printInOrder(tree);
  cout<<"\nPREORDER"<< endl;
  tree->printPreorder(tree);
}