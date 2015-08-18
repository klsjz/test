#include<iostream>
using namespace std;
struct treeNode
{
	int val;
	treeNode *left;
	treeNode *right;
	int height;
};
typedef treeNode* position;
int max(int a,int b)
{
	return a>b?a:b;
}
int height(position p)
{
	if(p==NULL)
		return -1;
	else
		return p->height;
}
position singlerotateleft(position k)
{
	position k1;
	k1=k->left;
	k->left=k1->right;
	k1->right=k;
	k->height=max(height(k->left),height(k->right))+1;
	k1->height=max(height(k1->left),height(k1->right))+1;
	return k1;
}
position singlerotateright(position k)
{
	position k1;
	k1=k->right;
	k->right=k1->left;
	k1->left=k;
	k->height=max(height(k->left),height(k->right))+1;
	k1->height=max(height(k1->left),height(k1->right))+1;
        return k1;
}
position doublerotateleft(position k)
{
	k->left=singlerotateright(k->left);
	return singlerotateleft(k);
}
position doublerotateright(position k)
{
	k->right=singlerotateleft(k->right);
	return singlerotateright(k);
}
position insert(position &k,int element)
{       
	if(k==NULL)
	{
		k=new treeNode;
		k->val=element;
		k->left=k->right=NULL;
		k->height=0;
	}
	else if(element<k->val)
	{
		k->left=insert(k->left,element);
		if(height(k->left)-height(k->right)==2)
		{	
			if(element<k->left->val)
				k=singlerotateleft(k);
		        else if(element>k->left->val)
				k=doublerotateleft(k);
		}
	}
	else if(element>k->val)
	{
		k->right=insert(k->right,element);
		if(height(k->right)-height(k->left)==2)
		{
			if(element>k->right->val)
				{
				k=singlerotateright(k);
				}
			else if(element<k->right->val)
				k=doublerotateright(k);
		}
	}
	k->height=max(height(k->left),height(k->right))+1;
	return k;
}
void printtree(position k)
{
	if(k==NULL)
	return;
	printtree(k->left);
	cout<<k->val<<":"<<k->height<<" ";
	printtree(k->right);
	return;
}



int main()
{
	cout<<"i see you"<<endl;
	position root=NULL;
//	root->left=root->right=NULL;
//	root->val=3;
//	root->height=0;
	insert(root,3);
	insert(root,2);
	insert(root,1);
	insert(root,4);
	insert(root,5);
	insert(root,6);
	insert(root,7);
	insert(root,16);
	insert(root,15);
	insert(root,14);
	insert(root,13);
	insert(root,12);
//	insert(root,12);
	insert(root,11);
	insert(root,10);
	insert(root,8);
	insert(root,9);
	printtree(root);
	cout<<endl;
	return 0;

}













