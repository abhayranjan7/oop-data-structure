#include <stdio.h>
//using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *put(struct node *root,int data)
{
    if(root==NULL)
    {
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
        root=NULL;
    }
    else if(root->data<data)
    {
        root->right=put(root->right,data);
    }
    else
    {
        root->left=put(root->left,data);
    }
    return root;
}
struct node *lca(struct node *root,int v1,int v2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==v1||root->data==v2)
    {
        return root;
    }
    struct node *lcaleft=lca(root->left,v1,v2);
    struct node *lcaright=lca(root->right,v1,v2);
    if(lcaleft&&lcaright)
    {
        return root;
    }
    return (lcaleft!=NULL)?lcaleft:lcaright;
}
int main()
{
    struct node *root=NULL;
    root=put(root,8);
    put(root,4);
    put(root,1);
    put(root,3);
    put(root,2);
    put(root,9);
    put(root,7);
    put(root,18);
    put(root,14);
    put(root,16);
    struct node *ptr=lca(root,2,7);
    printf("%d",ptr->data);
    return 0;
}

