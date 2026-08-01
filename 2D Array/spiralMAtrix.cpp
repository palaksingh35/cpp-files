#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int  count=0;
        int total=row*col;

         int startingRow=0;
         int startingCol=0;
         int endingRow=row-1;
         int endingCol=col-1;

        while(count<total){
           // Print Starting Row
        for(int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // Print Ending Column
        for(int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // Print Ending Row
        for(int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // Print Starting Column
        for(int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
    }
};


    int main() {

    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans = sol.spiralOrder(matrix);

    cout << "Spiral Order: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
