
#include <iostream>
#include <math.h>
#include <set>

using namespace std;

struct node
{
    int val;
    node * left;
    node * right;
    node (int val){
    this -> val = val;
    right = NULL;
    left = NULL;
 }
};


class BST{
 node * root;

 node * insert(node * root, int val){
    if (root == NULL) return new node(val);

    if (val < root->val) root->left = insert(root->left, val);

    if (val > root->val) root->right = insert(root->right, val);
    
    return root;
 } 

 int ans(node* root){
     if (root == NULL) return 0;
     int L = depth(root->left);
     int R = depth(root->right);
     int Lans = ans(root->left);
     int Rans = ans(root->right);
   
     return max(L + R + 1, max(Lans, Rans));
 }

 int depth(node * root){

  if (root == NULL) return 0;

  return max(depth(root->left), depth(root->right)) + 1;

 } 


public:
 BST(){
  root = NULL;
 }

 void insert(int val){

  root = insert(root, val);

 }

 int ans(){

  return ans(root);

 }

};



int main(){
 BST tree;
 int n;
 cin >> n;
 for (int i = 1; i <= n; i ++){
  int x;
  cin >> x;
  tree.insert(x);
 } 
 cout << tree.ans() << endl;
 return 0;
}
