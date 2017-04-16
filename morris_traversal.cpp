/**
 * Definition for binary
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode *fp(TreeNode * root)
 {
     TreeNode * tmp=root->left;
     while(tmp->right!=NULL && tmp->right!=root)
     {
         tmp=tmp->right;
     }
     return tmp;
 }
void morris(TreeNode* A) {
    
    vector<int> v;
    TreeNode * t;
    t=A;
    while(t!=NULL)
    {
        //cout<<"t is "<<t->val<<endl;
        if(t->left==NULL)
        {
            cout<<t->val<<" ";
            t=t->right;
        }
        else
        {
             TreeNode *pre=fp(t);
            // cout<<"pre is "<<pre->val<<endl;
             if(pre->right==NULL)
             {
                 pre->right=t;
                 t=t->left;
             }
             else
             {
                 cout<<t->val<<" ";
                 pre->right=NULL;
                 t=t->right;
                 
             }
             
             
           
        }
    }
    return v;
}

