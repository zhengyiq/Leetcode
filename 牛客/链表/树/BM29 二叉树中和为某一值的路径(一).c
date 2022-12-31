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

//����һ����
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
  * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
  * ����һ��������root��һ��ֵ sum ���ж��Ƿ��дӸ��ڵ㵽Ҷ�ӽڵ�Ľڵ�ֵ֮�͵��� sum ��·����
 1.����·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ�ӽ���������Ľ��
 2.Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ�
 3.·��ֻ�ܴӸ��ڵ㵽�ӽڵ㣬���ܴ��ӽڵ㵽���ڵ�
 4.�ܽڵ���ĿΪn
  *
  * @param root TreeNode��
  * @param sum int����
  * @return bool������
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