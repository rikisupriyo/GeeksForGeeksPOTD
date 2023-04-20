//O(n*n)

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* node){
        if (!node) return 0;
        return 1 + max(height(node->left), height(node->right));
    }
    
    int diameter(Node* root) {
        if (!root) return 0;
        
        int case1 = diameter(root->right);
        int case2 = diameter(root->left);
        int case3 = height(root->left) + height(root->right) + 1;
        
        return max(case1, max(case2, case3));
    }
};

//O(n)

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> pd(Node* root) {
        if (!root) {
            pair<int, int> x = make_pair(0, 0);
            return x;
        }
        
        pair<int, int> left = pd(root->left);
        pair<int, int> right = pd(root->right);
        
        int case1 = left.first;
        int case2 = right.first;
        int case3 = left.second + right.second + 1;
        
        pair<int, int> ans;
        ans.first = max(case1, max(case2, case3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }
    int diameter(Node* root) {
        return pd(root).first;
    }
};
