#include<iostream.h>
#include<conio.h>
#include<malloc.h>
struct btree
{
    int info;
    btree *left;
    btree *right;
};
btree *create_node(btree *node,int val)
{
    if(node==NULL)
    {
	node=(btree*)malloc(sizeof(btree));
	node->info=val;
	node->left=NULL;
	node->right=NULL;
	return(node);
    }
    if(val<=node->info)
    {
	node->left=create_node(node->left,val);
    }
    else
    {
	node->right=create_node(node->right,val);
    }
    return(node);
}
void preorder(btree *node)
{
   if(node)
   {
       cout<<"\t"<<node->info;
       preorder(node->left);
       preorder(node->right);
   }
}
void inorder(btree *node)
{
   if(node)
   {
       inorder(node->left);
       cout<<"\t"<<node->info;
       inorder(node->right);
   }
}
void postorder(btree *node)
{
   if(node)
   {
       postorder(node->left);
       postorder(node->right);
       cout<<"\t"<<node->info;
   }
}
void main()
{
    clrscr();
    int item;
    char ch;
    struct btree *R;
    R=NULL;
    do
    {
	cout<<"\n enter any value:-";
	cin>>item;
	R=create_node(R,item);
	cout<<"\n do you want to continue:-";
	ch=getche();
    }while(ch!='n');
    cout<<"\n preorder:-";
    preorder(R);
    cout<<"\n inorder:-";
    inorder(R);
    cout<<"\n postorder:-";
    postorder(R);
    getch();
}