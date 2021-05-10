#include<iostream.h>
#include<conio.h>
#include<malloc.h>
#include<stdio.h>
#define true 1
#define false 0
struct btree
{
   int info;
   btree *left;
   btree *right;
};
btree *create(btree *node,int val)
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
      node->left=create(node->left,val);
   }
   else
   {
      node->right=create(node->right,val);
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
void findnode(btree *node,int val,btree **x,btree **parent,int *found)
{
   btree *q;
   q=node;
   *found=false;
   *parent=NULL;
   while(q!=NULL)
   {
      if(q->info==val)
      {
	 *found=true;
	 *x=q;
	 return;
      }
      *parent=q;
      if(val<q->info)
      {
	  q=q->left;
      }
      else
      {
	  q=q->right;
      }
   }
}
void deltree(btree *node,int val)
{
   btree *fn,*ndsuc,*parent;
   int found;
   if(node==NULL)
   {
      cout<<"\n the tree is empty";
   }
   fn=parent=NULL;
   findnode(node,val,&fn,&parent,&found);
   if(found==false)
   {
      cout<<"\n data not found";
      return;
   }
   if(fn->left!=NULL && fn->right!=NULL)
   {
     parent=fn;
     ndsuc=fn->right;
     while(ndsuc->left!=NULL)
     {
	 parent=ndsuc;
	 ndsuc=ndsuc->left;
     }
     fn->info=ndsuc->info;
     parent->left=NULL;
     free(ndsuc);
   }
   if(fn->left==NULL && fn->right==NULL)
   {
     if(parent->right==fn)
     {
	 parent->right=NULL;
     }
     else
     {
	 parent->left=NULL;
     }
     free(fn);
     return;
   }
   if(fn->left==NULL && fn->right!=NULL)
   {
     if(parent->left==fn)
     {
	parent->left=fn->right;
     }
     else
     {
	parent->right=fn->right;
     }
     free(fn);
     return;
   }
   if(fn->left!=NULL && fn->right==NULL)
   {
     if(parent->left==fn)
     {
	parent->left=fn->left;
     }
     else
     {
	parent->right=fn->left;
     }
     free(fn);
     return;
   }
}
void display(btree *node)
{
   cout<<"\n preorder:-";
   preorder(node);
   cout<<"\n inorder:-";
   inorder(node);
   cout<<"\n postorder:-";
   postorder(node);
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
      R=create(R,item);
      cout<<"\n do you want to continue:-";
      ch=getche();
   }while(ch!='n');
   cout<<"\n the tree before deletion:-\n";
   display(R);
   do
   {
      cout<<"\n enter the value to be deleted:-";
      cin>>item;
      deltree(R,item);
      cout<<"\n tree after deletion:-\n";
      display(R);
      cout<<"\n do you want to continue:-";
      ch=getche();
   }while(ch!='n');
   getch();
}




