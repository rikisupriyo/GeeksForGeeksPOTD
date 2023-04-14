class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>> stk;
        stk.push({color[0], radius[0]});
        
        for (int i=1; i<N; i++) {
            if (!stk.empty() && stk.top().first == color[i] && stk.top().second == radius[i])
                stk.pop();
            else
                stk.push({color[i], radius[i]});
        }
        return stk.size();
    }
};
