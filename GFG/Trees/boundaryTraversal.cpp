class Solution {
public:
    void traverseLeft(Node *root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            //reached leaf node
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left,ans);
        }
        else{
            traverseLeft(root->right,ans);
        }
    }
    void traverseLeaf(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
    }
    void traverseRight(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            return;
        }
   
        if(root->right){
            traverseRight(root->right,ans);
        }
        else{
            traverseRight(root->left,ans);
        }
        
        ans.push_back(root->data);
        
    }
    vector <int> boundary(Node *root){
        vector<int>ans;
        if(root==NULL){
            return {};
        }
        if(root->left==NULL and root->right==NULL){
            ans.push_back(root->data);
            return ans;
        }
        ans.push_back(root->data);
        //traverse left
        traverseLeft(root->left,ans);
        
        //traverse leaf
        traverseLeaf(root,ans);
        
        //traverse right
        traverseRight(root->right,ans);
        
        return ans;
    }
};