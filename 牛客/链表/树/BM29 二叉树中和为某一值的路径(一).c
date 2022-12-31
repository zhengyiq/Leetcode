#include <stdio.h>
#include <stdbool.h>
typedef struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
}BTNode;

BTNode* ByTreeNode(int x)
{
    BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
    if (newnode == NULL)
    {
        perror("malloc failed");
        exit(-1);
    }
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->val = x;
    return newnode;
}

//生成一颗树
BTNode* BinaryTreeCreate()
{
    //BTNode* n5 = ByTreeNode(5);
    //BTNode* n4 = ByTreeNode(4);
    //BTNode* n1 = ByTreeNode(1);
    //BTNode* n11 = ByTreeNode(11);
    //BTNode* n2 = ByTreeNode(2);
    //BTNode* n7 = ByTreeNode(7);
    //BTNode* n8 = ByTreeNode(8);
    //BTNode* n9 = ByTreeNode(9);


    //n5->left = n4;
    //n4->left = n1;
    //n1->left = n1->right = NULL;
    //n4->right = n11;
    //n11->left = n2;
    //n2->left = n2->right = NULL;
    //n11->right = n7;
    //n7->left = n7->right = NULL;
    //n5->right = n8;
    //n8->left = NULL;
    //n8->right = n9;
    //n9->left = n9->right = NULL;

    BTNode* n1 = ByTreeNode(1);
    BTNode* n2 = ByTreeNode(2);
    n1->left = n2;
    n1->right = NULL;
    n2->right = n2->left = NULL;
    return n1;
}


/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
 /**
  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
  * 给定一个二叉树root和一个值 sum ，判断是否有从根节点到叶子节点的节点值之和等于 sum 的路径。
 1.该题路径定义为从树的根结点开始往下一直到叶子结点所经过的结点
 2.叶子节点是指没有子节点的节点
 3.路径只能从父节点到子节点，不能从子节点到父节点
 4.总节点数目为n
  *
  * @param root TreeNode类
  * @param sum int整型
  * @return bool布尔型
  */

int _hasPathSum(struct TreeNode* root, int data, int sum, int* ret)
{
    if ((*ret) == 1)
    {
        return 1;
    }
    if (root == NULL)
    {
        return 0;
    }
    data += root->val;
    if (root->left == NULL && root->right == NULL)
    {
        if (data == sum)
        {
            return 1;
        }
    }
    *ret = _hasPathSum(root->left, data, sum, ret);
    *ret = _hasPathSum(root->right, data, sum, ret);
    if ((*ret) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool hasPathSum(struct TreeNode* root, int sum) {
    // write code here
    if (root == NULL)
    {
        return false;
    }

    int data = 0;
    int ret = 0;
    int tmp = _hasPathSum(root, data, sum, &ret);
    if (tmp == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    BTNode* root = BinaryTreeCreate();
    hasPathSum(root, 3);
    return 0;
}