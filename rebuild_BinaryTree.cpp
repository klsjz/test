/*根据前序遍历序列1 2 4 7 3 5 6 8和中序遍历4 7 2 1 5 3 8 6；构建二叉树
剑指offer P56
*/
#include<iostream>
using namespace std;
struct BinaryTreeNode 
{
	int value;
	BinaryTreeNode * left;//
	BinaryTreeNode * right;
};
void preorder_traversal(BinaryTreeNode*root)
{	
	if(root==NULL)
	{
		return;
	}	
	else
	{
		preorder_traversal(root->left);
		cout<<root->value<<" ";
		preorder_traversal(root->right);
	}
}
BinaryTreeNode* Binary_treestruct(int *startpreorder,int *endpreorder,int *startinorder,int *endinorder)
{
	BinaryTreeNode *root=new BinaryTreeNode();
	int rootvalue=startpreorder[0];
	root->value=rootvalue;
	root->left=root->right=NULL;
	if(startpreorder==endpreorder)
		return root;
	int leftlength=0;
	int *temp=startinorder;
	while(*(temp++)!=rootvalue)
		leftlength++;
	cout<<"lenght:"<<leftlength<<endl;
	if(leftlength>0)
		root->left=Binary_treestruct(startpreorder+1,startpreorder+leftlength,startinorder,startinorder+leftlength-1);//构建左子树
	if(leftlength<endpreorder-startpreorder)
		root->right=Binary_treestruct(startpreorder+leftlength+1,endpreorder,startinorder+leftlength+1,endinorder);//构建右子树
	return root;
}
BinaryTreeNode* Binary_tree(int *preorder,int *inorder,int length)
{
	if(preorder==NULL||inorder==NULL||length<=0)
		return NULL;
	else
	Binary_treestruct(preorder,preorder+length-1,inorder,inorder+length-1);
	
}
int main()
{
	int preorder[8]={1,2,4,7,3,5,6,8};
	int inorder[8]={4,7,2,1,5,3,8,6};
	BinaryTreeNode *root;
	root=Binary_tree(preorder,inorder,8);
	cout<<root->value<<endl;
//	cout<<root->right->value<<endl;
	preorder_traversal(root);
	cout<<endl;
	return 0;
}
