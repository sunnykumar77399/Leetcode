class Solution {
public:
    vector<int> ncr(int row){
         int ans=1;
        vector<int> res;
        res.push_back(ans);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            res.push_back(ans);
        }
        return res;
    } 
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> res;
      for(int i=1;i<=numRows;i++){
          res.push_back(ncr(i));
      }  
      return res;
    }
};