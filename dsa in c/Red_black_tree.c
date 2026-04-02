struct bst{
    int val;
    struct bst *left;
    struct bst *right;
    struct bst*color;
    struct bst *parent;
};
struct bst*findparent(struct bst*root,int val){
    if (root == NULL || root->val==val)
    {
        return NULL;
    }
    if (root->left!=NULL && root->left->val == val)
    {
        return root;
    }
    else if(root->right!=NULL && root->right->val==val){
        return root;
    }
    else{
        if(val<root->val){
            return findparent(root->left,val);
        }
        else{
            return findparent(root->right,val);
        }
    }
} 
struct bst*createnode(struct bst*node,int val){
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    node->val=val;
    struct bst *parent = findparent(node);
    if(parent==NULL)
        node->color = "B";
    else
        node->color = "R";
    return node;
}
struct bst*rbtree(struct bst*root,int val){
    if(root==NULL){
        root = createnode(root, val);
    }
    else if(val<root->val){
            root->left = rbtree(root->left, val);
        }
    else if(val>root->val){
        root->right = rbtree(root->right, val);
    }
    struct bst *parent = findparent(root, val);
    if()
    }
