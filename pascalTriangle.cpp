class Solution {
private:
    vector<int> generateRows(int row){
        long long res = 1;
        vector<int> rowAns;
        rowAns.push_back(res);

        for(int col = 1; col < row; col++){
            res = res * (row - col);
            res = res / col;
            rowAns.push_back(res);
        }

        return rowAns;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generateRows(i));
        }

        return ans;
    }
};
